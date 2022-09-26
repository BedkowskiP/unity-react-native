import React, { useState } from 'react';
import { Button, Text, View } from 'react-native';
import { Picker } from "@react-native-picker/picker";
import {
  gyroscope
} from "react-native-sensors";
import { setUpdateIntervalForType, SensorTypes } from "react-native-sensors";




const Home = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const [shape, setShape] = useState("");
  const [color, setColor] = useState("");
  var lastShape = "";
  var lastColor = "";
  var isTextVisible = false;

  if (route?.params) {
    isTextVisible = true;
    lastShape = route.params.shape;
    lastColor = route.params.color;
  }

  const goToUnity = () => {
    navigation.navigate('Unity', {
      shape: shape,
      color: color
    });
  }

  return (
    <View style={{ flex: 1, justifyContent: 'center', alignItems: 'center' }}>
      <Picker style={{ width: 400 }}
        selectedValue={shape}
        onValueChange={(itemValue) =>
          setShape(itemValue)
        }>
        <Picker.Item label="Choose shape" />
        <Picker.Item label="Cube" value="Cube" />
        <Picker.Item label="Sphere" value="Sphere" />
        <Picker.Item label="Cylinder" value="Cylinder" />
      </Picker>
      <Picker style={{ width: 400 }}
        selectedValue={color}
        onValueChange={(itemValue) =>
          setColor(itemValue)
        }>
        <Picker.Item label="Choose color" />
        <Picker.Item label="Red" value="Red" />
        <Picker.Item label="Green" value="Green" />
        <Picker.Item label="Blue" value="Blue" />
      </Picker>
      <Button disabled={shape == "" || color == ""} title="Start Unity" onPress={() => goToUnity()} />
      <View style={{ width: 400, padding: 20 }}>
        {isTextVisible && <Text style={{ fontSize: 17 }}>Last shape: {lastShape}</Text>}
        {isTextVisible && <Text style={{ fontSize: 17 }}>Last color: {lastColor}</Text>}
      </View>
    </View>
  );
};

setUpdateIntervalForType(SensorTypes.gyroscope, 100);

const subscription = gyroscope.subscribe(({ x, y, z, timestamp }) =>
  console.log({ x, y, z, timestamp })
);
setTimeout(() => {
  subscription.unsubscribe();
}, 10000);


export default Home;
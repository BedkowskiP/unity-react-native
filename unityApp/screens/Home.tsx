import React, { useState } from 'react';
import { Button, Text, View } from 'react-native';
import { Picker } from '@react-native-picker/picker';

const Home = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const [shape, setShape] = useState("");
  const [color, setColor] = useState("");
  var lastShape = "";
  var lastColor = "";

  if (route?.params) {
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
      <Button title="Start Unity" onPress={() => goToUnity()} />
      <View style={{ width: 400, padding: 20 }}>
        <Text style={{ fontSize: 17 }}>Last shape: {lastShape}</Text>
        <Text style={{ fontSize: 17 }}>Last color: {lastColor}</Text>
      </View>
    </View>
  );
};

export default Home;
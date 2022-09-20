import React, { useRef, useState } from 'react';
import { Button, Pressable, Text, View } from 'react-native';
import {Picker} from '@react-native-picker/picker';

const Home = ({ navigation }: { navigation: undefined }) => {
  const [shape, setShape] = useState("");
  const [color, setColor] = useState("");

  const goToUnity = () => {
    navigation.navigate('Unity', {
      shape: shape,
      color: color
    });
  }

  return (
    <View style ={{ flex: 1, justifyContent: 'center', alignItems: 'center'}}>
      <Picker style = {{ width: 400 }}
        selectedValue={shape}
        onValueChange={(itemValue, itemIndex) =>
          setShape(itemValue)
        }>
        <Picker.Item label="Choose shape" />
        <Picker.Item label="Cube" value="Cube" />
        <Picker.Item label="Sphere" value="Sphere" />
        <Picker.Item label="Cylinder" value="Cylinder" />
      </Picker>
      <Picker style = {{ width: 400 }}
        selectedValue={color}
        onValueChange={(itemValue, itemIndex) =>
          setColor(itemValue)
        }>
        <Picker.Item label="Choose color" />
        <Picker.Item label="Red" value="Red" />
        <Picker.Item label="Green" value="Green" />
        <Picker.Item label="Blue" value="Blue" />
      </Picker>
      <Button title="Start Unity" onPress={() => goToUnity()} />

    </View>
  );
};

export default Home;
import React, { useState } from 'react';
import { Button, StyleSheet, Text, TextInput, View } from 'react-native';
import { Picker } from '@react-native-picker/picker';

const Home = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const [playerName, setPlayerName] = useState("");
  const [roomName, setRoomName] = useState("");
  var lastPlayerName = "";
  var lastRoomName = "";
  var isTextVisible = false;

  if (route?.params) {
    isTextVisible = true;
    lastPlayerName = route.params.shape;
    lastRoomName = route.params.color;
  }

  const goToUnity = (param: boolean) => {
    setTimeout(() =>
      navigation.navigate('Unity', {
        playerName: playerName,
        host: param,
        roomName: roomName,
        playerColor: "Red",
      }), 500);

  }

  return (
    <View style={{ flex: 1, justifyContent: 'center', alignItems: 'center' }}>
      <Text>Player Name:</Text>
      <TextInput
        style={styles.input}
        onChangeText={setPlayerName}
        value={playerName}
      />
      <Text>Room Name:</Text>
      <TextInput
        style={styles.input}
        onChangeText={setRoomName}
        value={roomName}
      />
      <Button disabled={playerName == "" || roomName == ""} title="Join room" onPress={() => goToUnity(false)} />
      <Button disabled={playerName == "" || roomName == ""} title="Host room" onPress={() => goToUnity(true)} />
      <View style={{ width: 400, padding: 20 }}>
        {isTextVisible && <Text style={styles.text}>Last player name: {playerName}</Text>}
        {isTextVisible && <Text style={styles.text}>Last room name: {roomName}</Text>}
      </View>
    </View>
  );
};

const styles = StyleSheet.create({
  input: {
    width: 350,
    height: 40,
    margin: 12,
    borderWidth: 1,
    padding: 10,
  },
  text: {
    fontSize: 17,
    color: 'black',
  }
});

export default Home;

/*
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
*/
import React, { useEffect, useState } from 'react';
import { Button, StyleSheet, Text, TextInput, View } from 'react-native';
import AsyncStorage from '@react-native-async-storage/async-storage';

let unityUserInfo = {
  _playerName: "",
  _roomName: "",
  _playerColor: "0,0,1",
  _isMuted: true,
}

const setData = async (param: any) => {
  try {
    console.log("React [Home]", "Setting new user data.")
    const value = JSON.stringify(param);
    await AsyncStorage.setItem('@unity_user_info', value);
    return true;
  } catch (e) {
    console.log("React [Home]", "Unable to set data: " + e);
    return false;
  }
}

const getData = (key: string) => {
  try {
    console.log("React [Home]", "Receiving user data.")
    const value = AsyncStorage.getItem(key);
    if (value !== null)
      return value;
  } catch (e) {
    console.log("React [Home]", "Unable to get data: " + e)
    return null;
  }
}

const Home = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const [playerName, setPlayerName] = useState("");
  const [roomName, setRoomName] = useState("");
  const [unityInfo, setUnity] = useState<typeof unityUserInfo>();
  const [isNewValue, setValue] = useState<boolean>(false);
  const [isTextVisible, setText] = useState<boolean>(false);
  //var isNewValue = false;

  const goToUnity = () => {
    if (unityInfo) unityUserInfo = unityInfo;
    if (unityUserInfo._playerName != playerName) unityUserInfo._playerName = playerName;
    if (unityUserInfo._roomName != roomName) unityUserInfo._roomName = roomName;
    navigation.navigate('Unity', {
      _playerName: unityUserInfo._playerName,
      _roomName: unityUserInfo._roomName,
      _playerColor: unityUserInfo._playerColor, //r,g,b colors
      _isMuted: unityUserInfo._isMuted,
    });
  }

  try {
    if (route?.params != null) {
      setData(route?.params).then((value) => {
        if (value) setValue(value);
      });
    }
  } catch {

  }

  useEffect(() => {
    getData('@unity_user_info')?.then(checkData => {
      if (checkData != null) {
        setUnity(JSON.parse(checkData));
        setText(true);
      }
    });
  }, [])

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
      <Button disabled={playerName == "" || roomName == ""} title="Start" onPress={() => goToUnity()} />
      <View style={{ width: 400, padding: 20 }}>
        {isTextVisible && unityInfo && <Text style={styles.text}>Last player name: {unityInfo._playerName}</Text>}
        {isTextVisible && unityInfo && <Text style={styles.text}>Last room name: {unityInfo._roomName}</Text>}
        {isTextVisible && unityInfo && <Text style={styles.text}>Muted: {String(unityInfo._isMuted)}</Text>}
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
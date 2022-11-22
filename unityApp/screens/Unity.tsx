import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button } from 'react-native';
import { CommonActions } from '@react-navigation/native';

interface IMessage {
  gameObject: string;
  methodName: string;
  message: string;
}

let messageFromUnity = {
  playerName: "",
  roomName: "",
  playerColor: ""
}

const Unity = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const unityRef = useRef<UnityView>(null);
  //unityRef.current?.resumeUnity();
  const parsedMess = JSON.stringify(route.params);

  const closeUnity = () => {
    unityRef.current?.postMessage("ReactUnity", "sendPlayerInfo", "");
    unityRef.current?.postMessage("ReactUnity", "disconnectButton", "");
  }

  const returnToHome = async () => {
    //unityRef.current?.unloadUnity();
    navigation.navigate('Home', {
      playerName: messageFromUnity.playerName,
      roomName: messageFromUnity.roomName,
      playerColor: messageFromUnity.playerColor,
    });
  }

  useEffect(() => {
    if (unityRef?.current) {
      const message: IMessage = {
        gameObject: "ReactUnity",
        methodName: "getPlayerInfo",
        message: parsedMess,
      };
      unityRef.current.postMessage(message.gameObject, message.methodName, message.message);
    }
  }, []);

  const onUnityMessageController = (message: string) => {
    try {
      messageFromUnity = JSON.parse(message);
    } catch {
      if (message == "Leave unity") {
        console.log("log", message);
        returnToHome();
        //unityRef.current?.postMessage("ReactUnity", "unloadUnity", "");
      } else console.log("log", message);
    }
  }

  return (
    <View style={{ flex: 1 }}>
      <UnityView
        ref={unityRef}
        style={{ flex: 1 }}
        onUnityMessage={(result) => { onUnityMessageController(result.nativeEvent.message) }} />
      <Button title="Close Unity Screen" onPress={() => closeUnity()} />
    </View >
  );
};

export default Unity;
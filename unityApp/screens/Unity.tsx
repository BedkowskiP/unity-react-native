import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button } from 'react-native';

interface IMessage {
  gameObject: string;
  methodName: string;
  message: string;
}

let messageFromUnity = {
  playerName: "",
  host: false,
  roomName: "",
  playerColor: "Red"
}

const Unity = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const unityRef = useRef<UnityView>(null);

  const parsedMess = JSON.stringify(route.params);

  const closeUnity = () => {
    unityRef.current?.postMessage("VariablesFromReact", "callLastParams", "");
    unityRef.current?.postMessage("VariablesFromReact", "DisconnectPlayer", "");
  }

  const returnToHome = () => {
    //unityRef.current?.unloadUnity();
    setTimeout(() => {
      navigation.navigate('Home', {
        playerName: messageFromUnity.playerName,
        hostRoom: messageFromUnity.host,
        roomName: messageFromUnity.roomName,
        playerColor: "Blue",
      });
    }, 1000)

  }

  useEffect(() => {
    if (unityRef?.current) {
      const message: IMessage = {
        gameObject: "VariablesFromReact",
        methodName: "loadPlayerInformation",
        message: parsedMess,
      };
      unityRef.current.postMessage(message.gameObject, message.methodName, message.message);
    }
  }, []);

  const onUnityMessageController = (message: string) => {
    try {
      messageFromUnity = JSON.parse(message);
    } catch {
      if (message == "Disconnected") {
        console.log("log", message);
        returnToHome();
      }
      else console.log("log", message);
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
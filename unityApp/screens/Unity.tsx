import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button, NativeSyntheticEvent } from 'react-native';

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
  console.log(parsedMess);

  const closeUnity = () => {
    //unityRef.current?.postMessage("CreateAndJoinRooms", "callLastParams", "");
    setTimeout(() => {
      unityRef.current?.unloadUnity();
      navigation.navigate('Home', {
        playerName: messageFromUnity.playerName,
        host: messageFromUnity.host,
        roomName: messageFromUnity.roomName,
        playerColor: "Red",
      });
    }, 100);

  }

  useEffect(() => {
    if (unityRef?.current) {
      const message: IMessage = {
        gameObject: "VariablesFromReact",
        methodName: "LoadPlayerInformation",
        message: parsedMess,
      };
      unityRef.current.postMessage(message.gameObject, message.methodName, message.message);
    }
  }, []);

  const onUnityMessageController = (message: string) => {
    try {
      messageFromUnity = JSON.parse(message);
      console.log("JSON", messageFromUnity);
    } catch {
      console.log("log", message);
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
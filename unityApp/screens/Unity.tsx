import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button, NativeSyntheticEvent } from 'react-native';
import { CommonActions } from '@react-navigation/native';

interface IMessage {
  gameObject: string;
  methodName: string;
  message: string;
}

let messageFromUnity = {
  shape: "",
  color: ""
}

const Unity = ({ navigation, route }: { navigation: undefined, route: any }) => {
  const unityRef = useRef<UnityView>(null);

  const parsedMess = JSON.stringify(route.params);

  const closeUnity = () => {
    unityRef.current?.postMessage("SceneManager", "callLastParams", "");
    setTimeout(() => {
      unityRef.current?.unloadUnity();
      navigation.navigate('Home', {
        shape: messageFromUnity.shape,
        color: messageFromUnity.color
      });
    }, 100);

  }

  useEffect(() => {
    if (unityRef?.current) {
      const message: IMessage = {
        gameObject: "SceneManager",
        methodName: "startUnity",
        message: parsedMess,
      };
      unityRef.current.postMessage(message.gameObject, message.methodName, message.message);
    }
  }, []);

  const onUnityMessageController = (message: string) => {
    try {
      messageFromUnity = JSON.parse(message);
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

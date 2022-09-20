import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button } from 'react-native';
import { CommonActions, useRoute } from '@react-navigation/native';

interface IMessage {
  gameObject: string;
  methodName: string;
  message: string;
}

const Unity = ({ navigation}: { navigation: undefined}) => {
  let route: any = useRoute();
  const unityRef = useRef<UnityView>(null);

  const shape = route.params?.shape;
  const color = route.params?.color;

  const closeUnity = () => {
    unityRef.current?.unloadUnity();
    setTimeout(() => {
      navigation.dispatch(CommonActions.reset({
        index: 1, 
        routes: [{ name: 'Unity',
        params: {
          shape: "Cube",
          color: "Red",
      } }] 
      }));
      navigation.navigate('Home');
    }, 500);
  }

  useEffect(() => {
    if (unityRef?.current) {
      const message: IMessage = {
        gameObject: 'gameObject',
        methodName: 'methodName',
        message: 'message',
      };
      unityRef.current.postMessage(message.gameObject, message.methodName, message.message);
      if(shape != null && color != null ) unityRef.current.postMessage("SceneManager", "loadScene", shape+";"+color);
    }
  }, []);

  return (
    <View style={{ flex: 1 }}>
      <UnityView
        ref={unityRef}
        style={{ flex: 1 }}
        onUnityMessage={(result) => { console.log('onUnityMessage', result.nativeEvent.message) }} />
      <Button title="Close Unity Screen" onPress={() => closeUnity()} />
    </View>
  );
};

export default Unity;

import React, { useRef, useEffect } from 'react';
import UnityView from '@azesmway/react-native-unity';
import { View, Button } from 'react-native';
import { CommonActions } from '@react-navigation/native';

interface IMessage {
  gameObject: string;
  methodName: string;
  message: string;
}

const Unity = ({ navigation, route }: { navigation: undefined, route: any}) => {
  const unityRef = useRef<UnityView>(null);
  const starting_param = route.params.starting_param;

  console.log('Starting parameter: '+starting_param);

  const setValue = (value) => {
    console.log('Adding value of '+value);
    unityRef.current?.postMessage('AppManager', 'setValue', value.toString());
  }

  const closeUnity = () => {
    unityRef.current?.unloadUnity();
    setTimeout(() => {
      navigation.dispatch(CommonActions.reset({ //reset the state of unity, get rid of existing parent error
        index: 1, 
        routes: [
          { name: 'Unity', params: { starting_param: null} }
        ] 
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
      if(starting_param != null) setValue(starting_param);
    }
  }, [starting_param]);

  var val_10 = 10;

  return (
    <View style={{ flex: 1 }}>
      <UnityView
        ref={unityRef}
        style={{ flex: 1 }}
        onUnityMessage={(result) => { console.log('onUnityMessage', result.nativeEvent.message) }} />
      <Button title="Add 10" onPress={() => setValue(val_10)} />
      <Button title="Close Unity Screen" onPress={() => closeUnity()} />
    </View>
  );
};

export default Unity;

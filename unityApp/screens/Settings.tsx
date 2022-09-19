import * as React from 'react';
import { useState } from 'react';
import {Button, Text, View, TextInput} from 'react-native';

const Settings = ({ navigation }: { navigation: undefined }) => {    
    const setStartingParam = () =>{
        global.starting_param = state.starting_param;
        console.log(global.starting_param)
    }

    return (
      <View style ={{ flex: 1, justifyContent: 'center', alignItems: 'center'}}>
        <Text>This is setting view.</Text>
        <TextInput placeholder='Type starting number here' onChangeText={(text) => useState({starting_param:text})}/>
        <Button title="Save" onPress={() => setStartingParam() } />
        <Button title="Don't save" onPress={() => navigation.goBack() } />
      </View>
    );
  };

export default Settings;
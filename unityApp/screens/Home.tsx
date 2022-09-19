import * as React from 'react';
import {Button, Text, View} from 'react-native';

const Home = ({ navigation }: { navigation: undefined }) => {
    return (
      <View style ={{ flex: 1, justifyContent: 'center', alignItems: 'center'}}>
        <Text>This is home view. Click this button to open unity.</Text>
        <Button title="Click me!" onPress={() => navigation.push('Unity', { starting_param: 0 }) } />
        <Button title="Click me to start with 3!" onPress={() => navigation.push('Unity', { starting_param: 3 }) } />
      </View>
    );
  };

export default Home;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class NativeAPI
{
    #if UNITY_IOS && !UNITY_EDITOR
       [DllImport("__Internal")]
       public static extern void sendMessageToMobileApp(string message);
    #endif
}

public class PlayerInfo
{
    public string _playerName;
    public string _roomName;
    public string _playerColor;
    public bool _isMuted;

    public string playerName
	{
        get
		{
            return _playerName;
		}
        set
		{
            _playerName = value;
		}
	}
    public string roomName
    {
        get
        {
            return _roomName;
        }
        set
        {
            _roomName = value;
        }
    }
    public string playerColor
    {
        get
        {
            return _playerColor;
        }
        set
        {
            _playerColor = value;
        }
    }
    public bool isMuted
    {
        get
        {
            return _isMuted;
        }
        set
        {
            _isMuted = value;
        }
    }
}

public class ReactUnity : MonoBehaviour
{
    public bool applyDontDestroyOnLoad = true;
    public static PlayerInfo player = new PlayerInfo();

	private void Awake()
	{
        if (applyDontDestroyOnLoad) DontDestroyOnLoad(this);
	}

	private void Start()
	{
        player.playerName = "Unity";
        player.playerColor = "0,0,0";
        player.roomName = "a";
        player.isMuted = true;
	}

	public void getPlayerInfo(string json)
    {
        player = JsonUtility.FromJson<PlayerInfo>(json);
        sendMessageToUnity("[ReactUnity] Recivied PlayerInfo: " + JsonUtility.ToJson(player).ToString() + ".");
    }
    public void sendPlayerInfo(string temp)
    {
        sendMessageToUnity("[ReactUnity] Sendback PlayerInfo: " + JsonUtility.ToJson(player).ToString() + ".");
        sendMessageToUnity(JsonUtility.ToJson(player).ToString());
    }

    public static void sendMessageToUnity(string message)
    {
        Debug.Log(message);
        if (Application.platform == RuntimePlatform.Android)
        {
            using (AndroidJavaClass jc = new AndroidJavaClass("com.azesmwayreactnativeunity.ReactNativeUnityViewManager"))
            {
                jc.CallStatic("sendMessageToMobileApp", message);
            }
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            #if UNITY_IOS && !UNITY_EDITOR
                  NativeAPI.sendMessageToMobileApp(message);
            #endif
        }
    }
}

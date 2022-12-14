using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ConnectToServer : MonoBehaviourPunCallbacks
{
	public GameObject reactUnityPrefab, photonMonoPrefab;
	public GameObject reactUnityObj, photonMonoObj;

	[SerializeField]
	private string roomName;

	public override void OnEnable()
	{
		base.OnEnable();
	}

	private void Start()
	{
		StartCoroutine(startPun());
	}

	private IEnumerator startPun()
	{
		reactUnityObj = GameObject.Find("ReactUnity");
		if (reactUnityObj == null){
			reactUnityObj = Instantiate(reactUnityPrefab);
			reactUnityObj.name = "ReactUnity";
		}

		photonMonoObj = GameObject.Find("PhotonMono");
		if (photonMonoObj == null)
		{
			photonMonoObj = Instantiate(photonMonoPrefab);
			photonMonoObj.name = "PhotonMono";
		}

		if (!PhotonNetwork.IsConnected)
		{
			PhotonNetwork.ConnectUsingSettings();
		} else {
			yield return StartCoroutine(DisconnectPlayer.disconnect());
			PhotonNetwork.ConnectUsingSettings();
		}
	}

	public override void OnConnectedToMaster()
	{
		ReactUnity.sendMessageToUnity("[ConnectToServer] " + PhotonNetwork.NetworkClientState.ToString() + ".");
		base.OnConnectedToMaster();
		roomName = ReactUnity.player.roomName;
		createOrJoinRoom(roomName);
	}
	public void createOrJoinRoom(string roomName)
	{
		RoomOptions roomOptions = new RoomOptions();
		PhotonNetwork.JoinOrCreateRoom(roomName, roomOptions, TypedLobby.Default);
	}

	public override void OnCreatedRoom()
	{
		ReactUnity.sendMessageToUnity("[ConnectToServer] Room created successfully. ");
		base.OnCreatedRoom();
	}
	public override void OnJoinedRoom()
	{
		base.OnJoinedRoom();
		PhotonNetwork.LoadLevel("Game");
	}

	public override void OnCreateRoomFailed(short returnCode, string message)
	{
		ReactUnity.sendMessageToUnity("[ConnectToServer] Room creation failed: " + message + ".");
		base.OnCreateRoomFailed(returnCode, message);
	}
}

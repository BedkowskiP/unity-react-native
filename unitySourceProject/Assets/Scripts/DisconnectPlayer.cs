using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;
using Photon.Realtime;
using static UnityEngine.UIElements.UxmlAttributeDescription;

public class DisconnectPlayer : MonoBehaviourPunCallbacks
{
	public override void OnEnable()
	{
		base.OnEnable();
	}

	public void disconnectButton()
	{
		StartCoroutine(startPlayerDisconnect());
	}

	public IEnumerator startPlayerDisconnect()
	{
		yield return leaveRoom();
		yield return disconnect();
	}

    public static IEnumerator leaveRoom()
	{
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] Leaving room.");
		if (PhotonNetwork.InRoom) PhotonNetwork.LeaveRoom();
		while (PhotonNetwork.InRoom)
			yield return null;
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] Left room.");
	}
	public static IEnumerator disconnect()
	{
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] Disconnecting.");
		if (PhotonNetwork.IsConnected) PhotonNetwork.Disconnect();
		while(PhotonNetwork.IsConnected)
			yield return null;
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] "+PhotonNetwork.NetworkClientState.ToString()+".");
	}

	public override void OnDisconnected(DisconnectCause cause)
	{
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] Disconnected: " + cause.ToString() + ".");
		SceneManager.LoadScene("Quit");
	}

	public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
	{
		base.OnPlayerLeftRoom(otherPlayer);
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] " + otherPlayer.NickName + " left the room.");
	}
	public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
	{
		base.OnPlayerEnteredRoom(newPlayer);
		ReactUnity.sendMessageToUnity("[DisconnectPlayer] " + newPlayer.NickName + " joined the room.");
	}
}

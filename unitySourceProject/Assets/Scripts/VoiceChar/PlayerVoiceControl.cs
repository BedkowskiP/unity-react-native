using Photon.Pun;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class PlayerVoiceControl : MonoBehaviourPunCallbacks
{
	[Header("Photon")]
	[SerializeField] PhotonVoiceView voiceView;
	[SerializeField] PhotonView view;
	Recorder recorder;

	[Header("Player Objects")]
	[SerializeField] GameObject speakingIndicatorObj;
	[SerializeField] GameObject muteIndicatorObj;
	[SerializeField] Text muteText;
	[SerializeField] GameObject muteSelfButton;
	[SerializeField] GameObject unmuteSelfButton;

	[Header("Master Objects")]
	[SerializeField] GameObject muteMasterButton;
	[SerializeField] GameObject unmuteMasterButton;

	[Header("Mute state")]
	[SerializeField] bool isMuted = false;
	[SerializeField] bool isMasterMuted = false;
	bool everyoneMuted = false;
	bool mutedByMaster = false;

	[Header("Mute Indicator Messages")]
	[SerializeField] string masterMuteMessage = "You're muted by master.";
	[SerializeField] string defaultMuteMessage = "You're muted.";

	private void Start()
	{
		this.isMuted = ReactUnity.player.isMuted;
		this.view = this.GetComponent<PhotonView>();
		this.voiceView = this.GetComponent<PhotonVoiceView>();
		this.recorder = GameObject.Find("PhotonVoice").GetComponent<Recorder>();
	}

	private void Update()
	{
		if (voiceView.IsRecording) {
			if (this.speakingIndicatorObj.activeInHierarchy == false)
				view.RPC("speakingIndicatorRPC", RpcTarget.AllBuffered, true);
		} else {
			if (this.speakingIndicatorObj.activeInHierarchy == true)
				view.RPC("speakingIndicatorRPC", RpcTarget.AllBuffered, false);
		}

		checkMasterMuteState();
		checkMuteState();

		if (isMasterMuted) {
			if(muteText.text != masterMuteMessage)
				muteText.text = masterMuteMessage;
		} else if(isMuted) {
			if(muteText.text != defaultMuteMessage)
				muteText.text = defaultMuteMessage;
		}

		if (!PhotonNetwork.IsMasterClient) {
			if (isMasterMuted) {
				if (!isMuted) mutePlayer(true);
			}
		} else {
			if (isMasterMuted)
			{
				isMasterMuted = false;
				everyoneMuted = true;
			}
		}

		if (PhotonNetwork.IsMasterClient) {
			if(everyoneMuted)
			{
				if (muteMasterButton.activeInHierarchy)
				{
					this.muteMasterButton.SetActive(false);
					this.unmuteMasterButton.SetActive(true);
				}
			} else {
				if (!muteMasterButton.activeInHierarchy)
				{
					this.muteMasterButton.SetActive(true);
					this.unmuteMasterButton.SetActive(false);
				}
			}
		}
	}

	private void checkMasterMuteState()
	{
		if (!PhotonNetwork.IsMasterClient)
		{
			if (mutedByMaster && !isMasterMuted)
			{
				view.RPC("masterMuteStateRPC", RpcTarget.AllBuffered, true);
			}
			else if (!mutedByMaster && isMasterMuted)
			{
				view.RPC("masterMuteStateRPC", RpcTarget.AllBuffered, false);
			}
		}
	}

	private void checkMuteState()
	{
		if (isMuted && recorder.RecordingEnabled == true) mutePlayer(true);
		else if (!isMuted && recorder.RecordingEnabled == false) mutePlayer(false);
	}

	public void mutePlayer(bool state)
	{
		isMuted = state;
		ReactUnity.player.isMuted = state;
		if (state == true) {
			recorder.RecordingEnabled = false;
			muteSelfButton.SetActive(false);
			unmuteSelfButton.SetActive(true);
			muteIndicatorObj.SetActive(true);
		} else if(state == false) {
			recorder.RecordingEnabled = true;
			unmuteSelfButton.SetActive(false);
			muteSelfButton.SetActive(true);
			muteIndicatorObj.SetActive(false);
		}
		view.RPC("muteInfoRPC", RpcTarget.All, view.Owner.NickName, isMuted, isMasterMuted);
	}

	public void masterMute(bool state)
	{
		isMasterMuted = state;
		everyoneMuted = state;
		mutedByMaster = state;
		view.RPC("masterMuteRPC", RpcTarget.AllBuffered, state);
	}

	#region rpc
	[PunRPC]
	public void masterMuteRPC(bool state)
	{
		GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
		foreach(GameObject player in players)
		{
			string nick = player.GetComponent<PhotonView>().Owner.NickName;
			player.GetComponent<PlayerVoiceControl>().mutedByMaster = state;
		}
	}

	[PunRPC]
	public void masterMuteStateRPC(bool state)
	{
		this.isMasterMuted = state;
		this.everyoneMuted = state;
	}

	[PunRPC]
	public void speakingIndicatorRPC(bool state)
	{
		this.speakingIndicatorObj.SetActive(state);
	}
	[PunRPC]
	public void muteInfoRPC(string nick, bool state, bool masterState)
	{
		if(!masterState)
			if(state)
				ReactUnity.sendMessageToUnity("[PlayerVoiceControl] Player " + nick + " is now muted.");
			else
				ReactUnity.sendMessageToUnity("[PlayerVoiceControl] Player " + nick + " is not muted anymore.");
	}
	#endregion

	public override void OnJoinedRoom()
	{
		GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
		foreach (GameObject player in players)
		{
			if(player.GetComponent<PlayerVoiceControl>().mutedByMaster == true)
			{
				this.mutedByMaster = true;
				break;
			}
		}
	}
}

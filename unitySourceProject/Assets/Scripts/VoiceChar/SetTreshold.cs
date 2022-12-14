using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.PUN;
using Photon.Voice.Unity;

public class SetTreshold : MonoBehaviour
{
	[SerializeField] Recorder recorder;
	[SerializeField] [Range(0.01f, 0.1f)] public float threshold = 0.01f;

	private void Start()
	{
		recorder.VoiceDetectionThreshold = threshold;
	}

	private void Update()
	{
		if(recorder.VoiceDetectionThreshold != threshold)
			recorder.VoiceDetectionThreshold = threshold;
	}
}

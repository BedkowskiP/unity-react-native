using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetSpeaker : MonoBehaviour
{
    [SerializeField] Vector3 position = new Vector3(0f, 0f, 0f);

	private void Start()
	{
		if (this.gameObject.transform.localPosition != position)
		{
			this.gameObject.transform.localPosition = position;
		}
	}
}

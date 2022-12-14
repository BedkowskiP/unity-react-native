using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseUnity : MonoBehaviour
{
    [SerializeField] GameObject photonMonoObj;
    [SerializeField] GameObject reactUnityObj;

    void Start()
    {
        reactUnityObj = GameObject.Find("ReactUnity");
        photonMonoObj = GameObject.Find("PhotonMono");

        StartCoroutine(closeUnity());
    }

    IEnumerator closeUnity()
	{
        yield return removePhotonMono();
        yield return removeReactUnity();
        ReactUnity.sendMessageToUnity("Leave unity");
	}

    IEnumerator removePhotonMono()
	{
        Destroy(photonMonoObj);
        while (photonMonoObj != null)
            yield return null;
        ReactUnity.sendMessageToUnity("[CloseUnity] Destroyed PhotonMono.");
    }
    IEnumerator removeReactUnity()
    {
        Destroy(reactUnityObj);
        while (reactUnityObj != null)
            yield return null;
        ReactUnity.sendMessageToUnity("[CloseUnity] Destroyed ReactUnity.");
    }
}

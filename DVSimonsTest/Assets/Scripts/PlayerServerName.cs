using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;
using Photon.Realtime;


public class PlayerServerName : MonoBehaviourPun
{
    [HideInInspector] public TextMeshPro text;
    //public PhotonView photonView;
    // Start is called before the first frame update
    void Start()
    {
        text = this.gameObject.GetComponent<TextMeshPro>();
    }

    // Update is called once per frame
    void Update()
    {
        LookToCam();
        //this.photonView.RPC("SetName", RpcTarget.AllBufferedViaServer, this.gameObject.GetComponentInParent<PlayerMovement>().playerName);
        text.text = this.gameObject.GetComponentInParent<PlayerMovement>().playerName;
    }

    public void LookToCam()
    {
        if (MSKGameManager.Instance.clientPhotonView != null)
        {
            this.gameObject.transform.LookAt(MSKGameManager.Instance.clientPhotonView.gameObject.GetComponent<PlayerMovement>().lookPosition);
        }
    }

}

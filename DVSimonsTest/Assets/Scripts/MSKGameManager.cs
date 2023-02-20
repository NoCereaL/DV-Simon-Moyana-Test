/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Photon.Pun;

public class MSKGameManager : MonoBehaviour
{
    public static MSKGameManager _instance;
    public GameObject cam;
    public PhotonView clientPhotonView;
    public RoomManager roomManager;
    // Start is called before the first frame update

    public static MSKGameManager Instance
    {
        get
        {
            return _instance;
        }
    }
    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            _instance = this;
        }
        Resources.UnloadUnusedAssets();
    }

    private void Update()
    {

    }


}

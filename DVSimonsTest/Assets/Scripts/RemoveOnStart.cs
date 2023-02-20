/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class RemoveOnStart : MonoBehaviour
{
    public bool isCam;
    // Start is called before the first frame update
    void Start()
    {
        Remove();
    }

    public void Remove()
    {
        this.gameObject.transform.parent = null;
        if (isCam)
        {
            MSKGameManager.Instance.cam = this.gameObject;
        }
    }
}

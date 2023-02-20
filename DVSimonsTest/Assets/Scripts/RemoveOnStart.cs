/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoveOnStart : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Remove();
    }

    public void Remove()
    {
        this.gameObject.transform.parent = null;
    }
}

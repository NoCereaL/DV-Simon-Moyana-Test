/*
 * Author: Simon K Moyana
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class MaxCharLimit : MonoBehaviour
{
    [SerializeField] TMP_InputField roomNameInputField;

    public int charLimit = 15;
    // Start is called before the first frame update
    void Start()
    {
        roomNameInputField.characterLimit = charLimit;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

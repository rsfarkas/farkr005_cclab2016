using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class timer : MonoBehaviour {
	

	float Timer = 0.0f;

	// Update is called once per frame
	void Update () {

		if (playerController.count < 6){
			Timer += Time.deltaTime; 
			GetComponent<Text>().text = "Time: " + Timer;
		}
	}
}

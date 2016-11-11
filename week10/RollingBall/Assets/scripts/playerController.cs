using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class playerController : MonoBehaviour {

	public float speed;
	public Text countText;
	public Text winText;

	private Rigidbody rb;
	public static int count;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();
		winText.text = "";
	}


	// Gets called just before performing any physics calculations
	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
		
			rb.AddForce(movement * speed);
	}

	void OnTriggerEnter(Collider other){
		if (other.gameObject.CompareTag ("Pick Up")){
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
		}
	}

	void SetCountText (){
		countText.text = "Score: " + count.ToString ();
		if (count >= 6)
		{
			winText.text = "So Clean!\nGreat job :) ";
		}
	}
}

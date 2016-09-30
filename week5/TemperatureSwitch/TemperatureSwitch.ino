#define aref_voltage 3.3
 
//TMP36 Pin Variables
int tempPin = 1;    
int tempRead;    

int hotLed = 13;
int coolLed = 5;

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   

  pinMode(hotLed, OUTPUT);
  pinMode (coolLed, OUTPUT);
}
 
 
void loop(void) {
 
  tempRead = analogRead(tempPin);  
 
  float voltage = tempRead * aref_voltage;
  voltage /= 1024.0; 
 
  float temperatureC = (voltage - 0.5) * 100 ;  
  
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF); Serial.println(" degrees F");

  if(temperatureF < 117){
    digitalWrite(coolLed, HIGH);
    digitalWrite(hotLed, LOW);
    Serial.print("cool temp is: ");
    } else{
    digitalWrite(hotLed, HIGH);
    digitalWrite(coolLed, LOW);
    Serial.print("hot temp is: ");
  }
 
  delay(1000);

}

/* link to video is:https://vimeo.com/185075359 */ 

/* http://www.ladyada.net/make/logshield/lighttemp.html */
 

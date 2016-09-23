int led0 = 13;
int led1 = 12;
int led2 = 11;

void setup() {               
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT); 
}


void loop() {
  digitalWrite(led0, HIGH);  
  delay(100);               
  digitalWrite(led0, LOW);    
  delay(100); 

  digitalWrite(led1, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  delay(150);

  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
  delay(300);
}


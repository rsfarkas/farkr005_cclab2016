int off = 2;         
int on = 13;    

int state = HIGH;     
int reading;         
int priorState = LOW;   

void setup()
{
  pinMode(off, INPUT);
  pinMode(on, OUTPUT);
}

void loop()
{
  reading = digitalRead(off);


  if (reading == HIGH && priorState == LOW) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

  }

  digitalWrite(on, state);

  priorState = reading;
}


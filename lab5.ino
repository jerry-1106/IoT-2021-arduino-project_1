int potPin = 0;
int val = 0;
int ledPin[] = {4, 5, 6, 7, 8};


void setup() {

    for (int  index = 0; index <= 5; index++)
      {
        pinMode(ledPin[index], OUTPUT);
      }
    Serial.begin(9600); 
    
}

void loop() {
    val = analogRead(potPin);

    
  
    if(val < 204) 
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);  
      }

    if(val >= 204) 
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);  
      }

     if(val >= 408) 
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);   
      }

      if(val >= 612) 
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);   
      }

      if(val >= 816) 
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);  
      }
    
    Serial.println(val);
    delay(200);

}

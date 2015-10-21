void setup() {
  // Bits/second
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);
  if(sensorVal == HIGH){
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);    
  } else {
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
  }
} 

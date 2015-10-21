void setup() {
  // Bits/second
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  for (int i = 2; i <= 5; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
}

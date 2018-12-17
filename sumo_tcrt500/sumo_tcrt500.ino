void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor1 = analogRead(A0); //Max 1023
  int sensor2 = analogRead(A1); //Max 1023
  int sensor3 = analogRead(A2); //Max 1023


  Serial.println(sensor1);
  Serial.println(sensor2);
  Serial.println(sensor3);
 delay(1000);
}

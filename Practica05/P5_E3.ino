void setup() {
  pinMode(5,OUTPUT); //
  pinMode(4,OUTPUT); //
  pinMode(3,OUTPUT);  //
  pinMode(6,OUTPUT); //11 A 6
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); //
}

void loop() {
  int p = analogRead(A0);
  
  analogWrite(6,p/4); // HABILITA MOTOR 1
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);  //DA EL SENTIDO

  analogWrite(3,p/4); //HABILITA MOTOR 2
  digitalWrite(4,LOW);  //
  digitalWrite(5,HIGH); //

}

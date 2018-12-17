void setup() {
  pinMode(5,OUTPUT); //
  pinMode(4,OUTPUT); //
  pinMode(3,OUTPUT);  //
  pinMode(6,OUTPUT); //11 A 6
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); //
}

void loop() {
  digitalWrite(6,HIGH); // HABILITA MOTOR 1
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);  //DA EL SENTIDO

  digitalWrite(3,HIGH); //HABILITA MOTOR 2
  digitalWrite(4,LOW);  //
  digitalWrite(5,HIGH); //
}

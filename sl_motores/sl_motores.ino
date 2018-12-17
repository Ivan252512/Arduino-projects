void setup() {
  pinMode(5,OUTPUT); //
  pinMode(6,OUTPUT); //
  pinMode(7,OUTPUT);  //
  pinMode(10,OUTPUT); //11 A 6
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT); //
}

void loop() {
  digitalWrite(10,1); // HABILITA MOTOR 1
  digitalWrite(9,0); // ENTRADA 1 MOTOR 1
  digitalWrite(7,1);  //ENTRADA 2 MOTOR 1

  // YA SIRVE
  digitalWrite(8,1); //HABILITA MOTOR 2
  digitalWrite(5,0);  // ENTRADA 1 MOTOR 2
  digitalWrite(6,1); // ENTRADA 2 MOTOR 2

}

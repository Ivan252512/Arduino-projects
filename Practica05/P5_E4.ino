void setup() {
  pinMode(5,OUTPUT); //
  pinMode(4,OUTPUT); //
  pinMode(3,OUTPUT);  //
  pinMode(6,OUTPUT); //11 A 6
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); //
}

void loop() {
  int p = analogRead(A0); //Max 1023

  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);  //DA EL SENTIDO  
  digitalWrite(4,LOW);  //
  digitalWrite(5,HIGH); // 

  if (p>1023/2){
    analogWrite(6, 255); // HABILITA MOTOR  
    analogWrite(3, 255-p/4 +128); //HABILITA MOTOR 2  
  } else if (p<1023/2){
    analogWrite(6, p/4 + 128); // HABILITA MOTOR 1
    analogWrite(3, 255); //HABILITA MOTOR 2  
  }else{
    analogWrite(6, 255); // HABILITA MOTOR 1  
    analogWrite(3, 255); //HABILITA MOTOR 2
  }
  
}

void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT); //
  pinMode(4,OUTPUT); //
  pinMode(3,OUTPUT);  //
  pinMode(6,OUTPUT); //11 A 6
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); //
}

void loop() {
  int sensor1 = analogRead(A0); //Max 1023
  int sensor2 = analogRead(A1); //Max 1023
  int sensor3 = analogRead(A2); //Max 1023
  Serial.println(sensor1);
  Serial.println(sensor2);
  Serial.println(sensor3);

  if (sensor2<=500 and sensor1>500 and sensor3>500 ){
   
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);  //DA EL SENTIDO  
    digitalWrite(4,LOW);  //
    digitalWrite(5,HIGH); //
    analogWrite(6, 255 ); // HABILITA MOTOR 1  
    analogWrite(3, 255 ); //HABILITA MOTOR 2
         
  }else if (sensor1<=500 and sensor2>500 and sensor3>500 ){
    
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);  //DA EL SENTIDO  
    digitalWrite(4,LOW);  //
    digitalWrite(5,HIGH); //
    analogWrite(6, 0); // HABILITA MOTOR 1  
    analogWrite(3, 255 ); //HABILITA MOTOR 2
  
  }else if (sensor3<=500 and sensor1>500 and sensor2>500 ){

    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);  //DA EL SENTIDO  
    digitalWrite(4,LOW);  //
    digitalWrite(5,HIGH); //
    analogWrite(6, 255 ); // HABILITA MOTOR 1  
    analogWrite(3, 0); //HABILITA MOTOR 2
    
  }else{
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);  //DA EL SENTIDO  
    digitalWrite(4,LOW);  //
    digitalWrite(5,HIGH); //
    analogWrite(6, 0); // HABILITA MOTOR 1  
    analogWrite(3, 0); //HABILITA MOTOR 2
    
  }
  delay(1000);
}

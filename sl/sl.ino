float vel = 1;
float vuelta = 0.8;

void adelante(){
  digitalWrite(10,1); // HABILITA MOTOR 1
  digitalWrite(9,0); // ENTRADA 1 MOTOR 1
  analogWrite(7,255*vel);  //ENTRADA 2 MOTOR 1

  digitalWrite(6,1); //HABILITA MOTOR 2
  analogWrite(5,255*vel);  // ENTRADA 1 MOTOR 2
  digitalWrite(8,0); // ENTRADA 2 MOTOR 2
}

void izquierdaAdelante (int i){
  digitalWrite(10,1); // HABILITA MOTOR 1
  digitalWrite(9,0); // ENTRADA 1 MOTOR 1
  analogWrite(7,255*vel);  //ENTRADA 2 MOTOR 1

  digitalWrite(6,1); //HABILITA MOTOR 2
  analogWrite(5,255*vel*i);  // ENTRADA 1 MOTOR 2
  digitalWrite(8,0); // ENTRADA 2 MOTOR 2
}

void derechaAdelante (int i){
  digitalWrite(10,1); // HABILITA MOTOR 1
  digitalWrite(9,0); // ENTRADA 1 MOTOR 1
  analogWrite(7,255*vel*i);  //ENTRADA 2 MOTOR 1

  digitalWrite(6,1); //HABILITA MOTOR 2
  analogWrite(5,255*vel);  // ENTRADA 1 MOTOR 2
  digitalWrite(8,0); // ENTRADA 2 MOTOR 2
}

void setup() {
  pinMode(5,OUTPUT); //
  pinMode(6,OUTPUT); //
  pinMode(7,OUTPUT);  //
  pinMode(10,OUTPUT); //11 A 6
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT); //
  Serial.begin(9600);
}

void nada(){};

void loop() {
  int atras = analogRead(A0)>=712; //Max 1023
  int izquierdo = analogRead(A1)>=712; //Max 1023
  int derecho = analogRead(A2)>=712; //Max 1023
  int centro = analogRead(A3)>=712;

  Serial.println(atras);
  Serial.println(izquierdo);
  Serial.println(derecho);
  Serial.println(centro);

  //1==negro y 0==blanco==línea.
  if (atras==0 && izquierdo==0 && derecho==0 && centro==0){
    nada();
  }else if (atras==0 && izquierdo==0 && derecho==0 && centro==1){
    nada();
  }else if (atras==0 && izquierdo==0 && derecho==1 && centro==0){
    izquierdaAdelante(vuelta);
  }else if (atras==0 && izquierdo==0 && derecho==1 && centro==1){
    izquierdaAdelante(vuelta);
  }else if (atras==0 && izquierdo==1 && derecho==0 && centro==0){
    derechaAdelante(vuelta);
  }else if (atras==0 && izquierdo==1 && derecho==0 && centro==1){
    derechaAdelante(vuelta);
  }else if (atras==0 && izquierdo==1 && derecho==1 && centro==0){
    adelante();
  }else if (atras==0 && izquierdo==1 && derecho==1 && centro==1){
    nada();
  }else if (atras==1 && izquierdo==0 && derecho==0 && centro==0){ //?
    izquierdaAdelante(vuelta);
  }else if (atras==1 && izquierdo==0 && derecho==0 && centro==1){
    nada();
  }else if (atras==1 && izquierdo==0 && derecho==1 && centro==0){
    izquierdaAdelante(vuelta);
  }else if (atras==1 && izquierdo==0 && derecho==1 && centro==1){
    izquierdaAdelante(vuelta);
  }else if (atras==1 && izquierdo==1 && derecho==0 && centro==0){
    derechaAdelante(vuelta);
  }else if (atras==1 && izquierdo==1 && derecho==0 && centro==1){
    derechaAdelante(vuelta);
  }else if (atras==1 && izquierdo==1 && derecho==1 && centro==0){ //?
    izquierdaAdelante(vuelta);
  }else if (atras==1 && izquierdo==1 && derecho==1 && centro==1){
    nada();
  }
}

void setup() {
  /* 2. El potenciometro controla el numero de leds encendidos,
  recuerde que por el potenciometro se obtienen valores de 0 a 1023,
  fije intervalos espaciados igualmente para que de un valor 0 a x se encienda un solo led
  del valor x a y, encienda dos leds, y asi hasta encender los 10 leds para el valor 1023.*/
  
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  DDRB = B111111;
}

void loop() {
  int p = analogRead(A0);
  delay(10);

  if (p<102){
    //UNO
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    PORTB = B000000;
  }
  if (102<=p && p<=204){
    //DOS
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    PORTB = B000000;
  }
  if (204<=p && p<=306){
    //TRES
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    PORTB = B000000;
  }
  if (306<=p && p<=408){
    //CUATRO
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B000000;
  }
  if (408<=p && p<=510){
    //CINCO
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B000001;
  }
  if (510<=p && p<=612){
    //SEIS
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B000011;
  }
  if (612<=p && p<=714){
    //SIETE
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B000111;
  }
  if (714<=p && p<=816){
    //OCHO
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B001111;
  }
  if (816<=p && p<=918){
    //NUEVE
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B011111;
  }
  if (918<=p){
    //DIEZ
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    PORTB = B111111;
  }
}

void setup() {
  /* 4. El potenciometro controla el brillo de los leds conectados a los pines PWM,
  dependiendo de la posición del potenciometro sera el brillo de los leds,
  los otros ledspermaneceran apagados.  */
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  int i = analogRead(A0);
  int j = i/4;
  delay(10);
  
  analogWrite(5,j);
  analogWrite(6,j);
  analogWrite(9,j);
  analogWrite(10,j);
  analogWrite(11,j);
}

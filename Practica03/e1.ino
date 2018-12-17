void setup() {
  /* 1. Realice un programa que encienda solamente los leds en las salidas PWM,
   *  los leds van a estar inicialmente apagados y paulatinamente tienen que encenderse
   *  hasta llegar al maximo en 2 segundos, mantenerse un segundo encendidos al maximo
   y apagarse lentamente en otros 2 segundos.  */

}

void loop() {
  for(int x=0; x<256; x++){
    analogWrite(5,x);
    analogWrite(6,x);
    analogWrite(9,x);
    analogWrite(10,x);
    analogWrite(11,x);
    delay(7.84);
  }
  delay(1000);
  for(int x=255; x>-1; x--){
    analogWrite(5,x);
    analogWrite(6,x);
    analogWrite(9,x);
    analogWrite(10,x);
    analogWrite(11,x);
    delay(7.84);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:

  boolean botonA1 = false;
  boolean botonA2 = false;
  int lastVal;
  boolean cambiaVal=false;
  while(true){
    if (botonA1){
      for(int i=13; i>3; i--){
        if(cambiaVal){
          i=lastVal;
          cambiaVal=false;
        }
        if (analogRead(A2)>0){
          botonA1 = false;
          botonA2 = true;
          lastVal = i;
          cambiaVal=true;
          break;
        }
        digitalWrite(i,1);
        delay(100);
        digitalWrite(i,0);
      }
    }else{
      for(int i=4; i<14; i++){
        if(cambiaVal){
          i=lastVal;
          cambiaVal=false;
        }
        if (analogRead(A1)>0){
          botonA1 = true;
          botonA2 = false;
          lastVal = i;
          cambiaVal=true;
          break;
        }
        digitalWrite(i,1);
        delay(100);
        digitalWrite(i,0);
      }
    }
  }
}

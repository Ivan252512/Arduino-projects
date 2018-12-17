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
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  int i = 8;
  int j = 9;

  while(true){
     if(analogRead(A2)>0 or analogRead(A3)>0){
        digitalWrite(i, 0);
        digitalWrite(j, 0);
        i=8;
        j=9;
        digitalWrite(i, 1);
        digitalWrite(j, 1);
        delay(250);
     }
     
     if (analogRead(A1)>0){
        digitalWrite(i, 0);
        digitalWrite(j, 0);
        if (i>=13){
          i=3;
        }
        if (j>=13){
          j=3;
        }
        i++;
        j++;
        digitalWrite(i, 1);
        digitalWrite(j, 1);
        delay(250);
     }
     
     if (analogRead(A4)>0){
        digitalWrite(i, 0);
        digitalWrite(j, 0);
        if (i<=4){
          i=14;
        }
        if (j<=4){
          j=14;
        }
        i--;
        j--;
        digitalWrite(i, 1);
        digitalWrite(j, 1);
        delay(250);
     }
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int on1,iz1,der1,on2,iz2,der2,a,b,c=0;

  a=digitalRead(A0);
  b=digitalRead(A1);
  c=digitalRead(A2);
  
  if(a==0 && b==0 && c==0){on1=0;der1=0;iz1=0;on2=0;;der2=0;iz2=0;}
  if(a==0 && b==0 && c==1){on1=0;der1=0;iz1=0;on2=1;;der2=1;iz2=0;}
  if(a==0 && b==1 && c==0){on1=1;der1=1;iz1=0;on2=1;;der2=1;iz2=0;}
  if(a==0 && b==1 && c==1){on1=1;der1=1;iz1=0;on2=1;;der2=0;iz2=1;}
  if(a==1 && b==0 && c==0){on1=1;der1=0;iz1=1;on2=0;;der2=0;iz2=0;}
  if(a==1 && b==0 && c==1){on1=0;der1=0;iz1=0;on2=0;;der2=0;iz2=0;}
  if(a==1 && b==1 && c==0){on1=1;der1=0;iz1=1;on2=1;;der2=1;iz2=0;}
  if(a==1 && b==1 && c==1){on1=1;der1=0;iz1=1;on2=1;;der2=0;iz2=1;}
  
  
 digitalWrite(11,on1); //
 digitalWrite(12,iz1);
 digitalWrite(13,der1);
 digitalWrite(10,on2);//
 digitalWrite(9,der2);
 digitalWrite(8,iz2);

}

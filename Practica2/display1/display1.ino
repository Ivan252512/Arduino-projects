int unidades,decenas,centenas=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
void display (int a, int b, int c, int d, int e, int f, int g)// Función del display
{
  digitalWrite (0,a);   
  digitalWrite (1,b);   
  digitalWrite (2,c);
  digitalWrite (3,d);
  digitalWrite (4,e);
  digitalWrite (5,f);
  digitalWrite (6,g);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int unidad,decena,centena=0;
  for (int mensaje=0;mensaje<999;mensaje++){
      
      unidad++;
      if (unidad==10){unidad=0;decena++;}
      if (decena==10){decena=0;centena++;}

  digitalWrite (8,1);
  digitalWrite (9,1);
  digitalWrite (10,0);
          if (centena==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (centena==1){
            display (0,0,0,0,1,1,0);
          }
          if (centena==2){
            display (1,0,1,1,0,1,1);
          }
          if (centena==3){
            display (1,0,0,1,1,1,1);
          }
          if (centena==4){
            display (1,1,0,0,1,1,0);
          }
          if (centena==5){
            display (1,1,0,1,1,0,1);
          }
          if (centena==6){
            display (1,1,1,1,1,0,1);
          }
          if (centena==7){
            display (0,0,0,0,1,1,1); 
          }
          if (centena==8){
            display (1,1,1,1,1,1,1); 
          }
          if (centena==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);
            
 
        
  
  
  digitalWrite (8,1);
  digitalWrite (9,0);
  digitalWrite (10,1);
          if (decena==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (decena==1){
            display (0,0,0,0,1,1,0);
          }
          if (decena==2){
            display (1,0,1,1,0,1,1);
          }
          if (decena==3){
            display (1,0,0,1,1,1,1);
          }
          if (decena==4){
            display (1,1,0,0,1,1,0);
          }
          if (decena==5){
            display (1,1,0,1,1,0,1);
          }
          if (decena==6){
            display (1,1,1,1,1,0,1);
          }
          if (decena==7){
            display (0,0,0,0,1,1,1); 
          }
          if (decena==8){
            display (1,1,1,1,1,1,1); 
          }
          if (decena==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);



  digitalWrite (8,0);
  digitalWrite (9,1);
  digitalWrite (10,1);
          if (unidad==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (unidad==1){
            display (0,0,0,0,1,1,0);
          }
          if (unidad==2){
            display (1,0,1,1,0,1,1);
          }
          if (unidad==3){
            display (1,0,0,1,1,1,1);
          }
          if (unidad==4){
            display (1,1,0,0,1,1,0);
          }
          if (unidad==5){
            display (1,1,0,1,1,0,1);
          }
          if (unidad==6){
            display (1,1,1,1,1,0,1);
          }
          if (unidad==7){
            display (0,0,0,0,1,1,1); 
          }
          if (unidad==8){
            display (1,1,1,1,1,1,1); 
          }
          if (unidad==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);
  }

unidad=9;
decena=9;
centena=9;
for (int mensaje=999;mensaje>=0;mensaje--){
      
      if (unidad==0){unidad=9;decena--;}
      if (decena==0){decena=9;centena--;}

  digitalWrite (8,1);
  digitalWrite (9,1);
  digitalWrite (10,0);
          if (centena==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (centena==1){
            display (0,0,0,0,1,1,0);
          }
          if (centena==2){
            display (1,0,1,1,0,1,1);
          }
          if (centena==3){
            display (1,0,0,1,1,1,1);
          }
          if (centena==4){
            display (1,1,0,0,1,1,0);
          }
          if (centena==5){
            display (1,1,0,1,1,0,1);
          }
          if (centena==6){
            display (1,1,1,1,1,0,1);
          }
          if (centena==7){
            display (0,0,0,0,1,1,1); 
          }
          if (centena==8){
            display (1,1,1,1,1,1,1); 
          }
          if (centena==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);
            
 
        
  
  
  digitalWrite (8,1);
  digitalWrite (9,0);
  digitalWrite (10,1);
          if (decena==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (decena==1){
            display (0,0,0,0,1,1,0);
          }
          if (decena==2){
            display (1,0,1,1,0,1,1);
          }
          if (decena==3){
            display (1,0,0,1,1,1,1);
          }
          if (decena==4){
            display (1,1,0,0,1,1,0);
          }
          if (decena==5){
            display (1,1,0,1,1,0,1);
          }
          if (decena==6){
            display (1,1,1,1,1,0,1);
          }
          if (decena==7){
            display (0,0,0,0,1,1,1); 
          }
          if (decena==8){
            display (1,1,1,1,1,1,1); 
          }
          if (decena==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);



  digitalWrite (8,0);
  digitalWrite (9,1);
  digitalWrite (10,1);
          if (unidad==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (unidad==1){
            display (0,0,0,0,1,1,0);
          }
          if (unidad==2){
            display (1,0,1,1,0,1,1);
          }
          if (unidad==3){
            display (1,0,0,1,1,1,1);
          }
          if (unidad==4){
            display (1,1,0,0,1,1,0);
          }
          if (unidad==5){
            display (1,1,0,1,1,0,1);
          }
          if (unidad==6){
            display (1,1,1,1,1,0,1);
          }
          if (unidad==7){
            display (0,0,0,0,1,1,1); 
          }
          if (unidad==8){
            display (1,1,1,1,1,1,1); 
          }
          if (unidad==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(50);
        unidad--;
  }
}

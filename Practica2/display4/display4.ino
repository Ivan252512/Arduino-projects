int unidades,decenas,centenas,resultado=0;
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
  pinMode(11, OUTPUT);

  pinMode(A0, INPUT);
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

  int mensaje=analogRead(A0);
  
        String numero = "";
        numero = mensaje;
        String unidads="";
        String decenas="";
        String centenas="";
        String millares="";

        if (mensaje<=9){
        decenas=numero[1];
        unidads=numero[0];
        centenas=numero[2];
        millares=numero[3];
        }

        if (mensaje<=99 && mensaje>=10){
        decenas=numero[0];
        unidads=numero[1];
        centenas=numero[2];
        millares=numero[3];
        }

        if (mensaje>=100 && mensaje<=999){
        decenas=numero[1];
        unidads=numero[2];
        centenas=numero[0];
        millares=numero[3];
        }

        if (mensaje>=1000 && mensaje<=9999){
        decenas=numero[2];
        unidads=numero[3];
        centenas=numero[1];
        millares=numero[0];
        }
        
        int unidad=unidads.toInt();
        int decena=decenas.toInt();
        int centena=centenas.toInt();
        int millar=millares.toInt();



  digitalWrite (8,1);
  digitalWrite (9,1);
  digitalWrite (10,1);
  digitalWrite (11,0);
          if (millar==0){
            display (0,1,1,1,1,1,1); 
          }
       
          if (millar==1){
            display (0,0,0,0,1,1,0);
          }
          if (millar==2){
            display (1,0,1,1,0,1,1);
          }
          if (millar==3){
            display (1,0,0,1,1,1,1);
          }
          if (millar==4){
            display (1,1,0,0,1,1,0);
          }
          if (millar==5){
            display (1,1,0,1,1,0,1);
          }
          if (millar==6){
            display (1,1,1,1,1,0,1);
          }
          if (millar==7){
            display (0,0,0,0,1,1,1); 
          }
          if (millar==8){
            display (1,1,1,1,1,1,1); 
          }
          if (millar==9){
            display (1,1,0,1,1,1,1);
          } 
        delay(100);

      
  digitalWrite (8,1);
  digitalWrite (9,1);
  digitalWrite (10,0);
  digitalWrite (11,1);
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
        delay(100);
            
 
        
  
  
  digitalWrite (8,1);
  digitalWrite (9,0);
  digitalWrite (10,1);
  digitalWrite (11,1);
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
        delay(100);



  digitalWrite (8,0);
  digitalWrite (9,1);
  digitalWrite (10,1);
  digitalWrite (11,1);
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
        delay(100);
  }


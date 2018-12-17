// PRÁCTICA #1

// EJERCICIO DOS
// Primero se indica con la función pinMode el pin que se utilizará y su función (entrada/salida)

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // Con la función digitalRead se hará una lectura de la señal que reciban los pines A0, A1 y A2,
  // y se transformará a un valor entero (0 ó 1) con int
  
  int a=digitalRead(A0);
  int b=digitalRead(A1);
  int c=digitalRead(A2);


// Ahora con la combinación de los interruptores se formarán los números del 0-7 en sistema binario
// Esto indicará el número de leds que se deben encender.

  //CERO = no encienden los leds
  if (a == 0 && b == 0 && c ==0) {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
  //UNO = se enciende un led
  else if (a == 0 && b == 0 && c ==1) {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
  // DOS = se encienden dos leds
  else if (a == 0 && b == 1 && c ==0) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
    //TRES
   else if (a == 0 && b == 1 && c == 1) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
   }
    //CUATRO
   else if (a == 1 && b == 0 && c == 0) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
   }
    //CINCO
   else if (a == 1 && b == 0 && c == 1) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
   }
    //SEIS
   else if (a == 1 && b == 1 && c == 0) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
   }
    //SIETE (TODOS) = se encienden y apagan los leds cada segundo
   else if (a == 1 && b == 1 && c == 1) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(1000);
    
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(1000);
   }
    
}

// PRÁCTICA #1

// EJERCICIO 1
// Primero se indica con la función pinMode el pin que se utilizará y su función (entrada/salida)

void setup() {

  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // Con la función digitalRead se hará una lectura de la señal que reciba el pin A0
  // y se transformará a un valor entero (0 ó 1) con int
  
  int a = digitalRead(A0);

  // Se usa una función condicional (if) para encender o apagar determinados led
  if (a == 1) {
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }

  // Aquí no es necesario usar "else if" ya que sólo hay dos posibilidades: 0 ó 1
  // Si no se cumple la condición anterior (a ==1) significa que se cumple a==0
  // entonces se indica la acción despues de "else".
  
  else {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  }
    
}

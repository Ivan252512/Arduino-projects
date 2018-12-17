// PRÁCTICA #1

// EJERCICIO TRES
// Con una sola indicación se puede declarar al puerto B como salidas

void setup() {
  DDRB = B111111;
}

void loop() {
  
  // con un ciclo for se va a contar de 1 en 1, desde 0 hasta 63 en binarios
  for (int x = 0; x <= 63; x++) {
  PORTB = PINC+x;
  delay(1000);
  }
}


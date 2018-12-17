// PRÁCTICA 1

// EJERCICIO 4
// Con una sola indicación se puede declarar al puerto B como salidas

void setup() {
  Serial.begin(9600);
  DDRB = B111111;
}

void loop() {
  // La función analogRead dara lectura, en este caso, a una señal analógica y con "int" se volverá valor entero.
  // La cual se podrá ir cambiando de intensidad con un potenciómetro.
  int a = analogRead(A0);

  // Con println se mostrarán los valores enteros de la intesidad de la señal.
  Serial.println(a);
  delay(10);

  // Primero se lee la intensidad y este número será también el tiempo que permanezca encendido el led.
  // Si la intensidad es baja, la velocidad con que encienden y apagan los leds será alta,
  // ya que 'menos intensidad = menos tiempo = cambio rápido'
  // Si la intensidad es alta, la velocidad será baja. La intensidad será inversamente proporcional a la velocidad de cambio de led.
  
  PORTB = B100000;
  delay(a);
  PORTB = B010000;
  delay(a);
  PORTB = B001000;
  delay(a);
  PORTB = B000100;
  delay(a);
  PORTB = B000010;
  delay(a);
  PORTB = B000001;
  delay(a);
}

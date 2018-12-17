// TAREA #3

void setup() {
  Serial.begin(9600);
// Con una sola indicación se puede declarar al puerto B como salidas
  DDRB = B111111;
}

void loop() {
  // La función analogRead dara lectura, en este caso, a una señal analógica y con "int" se volverá valor entero.
  // La cual se podrá ir cambiando de intensidad con un potenciómetro.
  int a = analogRead(A0);
  Serial.println(a); // Imprime el valor entero de la señal recibida
  delay(100);

  // Con el condicional "if" se encenderán diferentes cantidad de leds de acuerdo a la intensidad controlada por el potenciómetro.
  if (a<100) {PORTB = B000000;}
  if (101<=a && a<=300) {PORTB = B000011;}
  if (301<=a && a<=500) {PORTB = B000111;}
  if (501<=a && a<=700) {PORTB = B001111;}
  if (701<=a && a<=900) {PORTB = B011111;}
  if (901<=a && a<=1000) {PORTB = B111111;}
  
  if (1001<=a) {
    PORTB = B111111;
    delay(100);
    PORTB = B000000; 
  }
}

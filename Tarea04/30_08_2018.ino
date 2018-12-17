//TAREA 4

void setup() {
  // Con la dunción DDR se indica el puerto que se usará y luego que funcionará como salida
  DDRD = B1111111;
}


// Se crean funciones con void, con lo cual dentro del bucle será más fácil llamar a la función
void cero() {
  // Con la función PORT se indica al puerto que se está usando y luego si la señal será HIGH o LOW
  PORTD = B1111110;
}

void uno() {
  // Así para formar cada número, con el pin que controla cada segmento
  PORTD = B0110000;
}

void dos() {
  PORTD = B1101101;
}

void tres() {
  PORTD = B1111001;
}

void cuatro() {
  PORTD = B0110011;
}

void cinco() {
  PORTD = B1011011;
}

void seis() {
  PORTD = B1011111;
}

void siete() {
  PORTD = B1110000;
}

void ocho() {
  PORTD = B1111111;
}

void nueve() {
  PORTD = B1110011;
}

void loop() {
  // Ahora sólo se llama a las funciones previamente declaradas en setup
  cero();
  delay(1000);
  uno();
  delay(1000);
  dos();
  delay(1000);
  tres();
  delay(1000);
  cuatro();
  delay(1000);
  cinco();
  delay(1000);
  seis();
  delay(1000);
  siete();
  delay(1000);
  ocho();
  delay(1000);
  nueve();
  delay(1000);
  ocho();
  delay(1000);
  siete();
  delay(1000);
  seis();
  delay(1000);
  cinco();
  delay(1000);
  cuatro();
  delay(1000);
  tres();
  delay(1000);
  dos();
  delay(1000);
  uno();
  delay(1000);
}

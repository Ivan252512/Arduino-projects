void setup() {
  Serial.begin(9600); // Se inicia la comunicacion serial
  pinMode(A0,INPUT);  //A0 es el pin que leera la entrada analogica

}

void loop() {
  int val_analog = analogRead(A0);  // la lectura analogica se convierte a valores enteros
  Serial.println(val_analog);  // se indica que se imprima la lectura analogica
  delay(1000);

}

void setup() {
  Serial.begin(9600); // Se inicia la comunicacion serial
  pinMode(A0,INPUT);  //A0 es el pin que leera la entrada analogica
  pinMode(10,OUTPUT);  // led para indicar objeto a 3 cm
  pinMode(12,OUTPUT);  // led para indicar objeto a mayor distancia

}

void loop() {
  int va = analogRead(A0);  // la lectura analogica se convierte a valores enteros
  Serial.println(va);  // se indica que se imprima la lectura analogica
  delay(1000);

  if(200 <= va && va <= 350) // se establace un rango para el que la señal coincida con 3cm
  {
    digitalWrite(10,HIGH);
    digitalWrite(12, LOW);
  }

  else if(25 < va && va < 200) // se establace un rango para el que la señal sea mayor a 3cm
  {
    digitalWrite(10,LOW);
    digitalWrite(12, HIGH);
  }
  
  else
  {
   digitalWrite(10,LOW);
   digitalWrite(12, LOW); 
  }
}

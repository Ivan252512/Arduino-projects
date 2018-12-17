void setup() {
  Serial.begin(9600); // Se inicia la comunicacion serial
  pinMode(A0,INPUT);  //A0 es el pin que leera la entrada analogica
  
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  int va = analogRead(A0);  // la lectura analogica se convierte a valores enteros
  Serial.println(va);  // se indica que se imprima la lectura analogica
  delay(1000);

  if(va <=15)  // Es un rango de error que engloba los valores que arroja cuando no detecta nada
  {
  analogWrite(6,0); // HABILITA MOTOR 1
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);  //DA EL SENTIDO

  analogWrite(3,0); //HABILITA MOTOR 2
  digitalWrite(4,LOW);
  digitalWrite(5,LOW); //DA EL SENTIDO
  }

  else
  // Si los valores son mayores a 15 significa que detecta algo y comenzaran a girar los motores
  // Cuanto mas cercano esta el objeto mayores son los valores que lee el sensor
  {
  analogWrite(6, 15+va/4); // HABILITA MOTOR 1
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);  //DA EL SENTIDO

  analogWrite(3, 15+va/4); //HABILITA MOTOR 2
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW); //DA EL SENTIDO
  } 
}

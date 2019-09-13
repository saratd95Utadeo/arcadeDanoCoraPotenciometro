int sensorValue;//variable guardar valor q se recibe de arduino
int pin=A0; //a q pin nos vamos a conectar

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  //leer datos
  //el valor del potenciometro, como el de cualquier entrada analoga sera entre 0 a 1023 .. 
  //pero si queremos q en processing el rectangulo se mueva entre el canvas de 500px,
  //el valor maximo del potenciometro debe ser 500, por eso se divide en 2.05 xq 1023/2.05= 499
  sensorValue= analogRead(pin);// (analogRead(pin)/2.05)

  //para verificar si el circuito quedo bien montado se usa el monitos Serie
  //pero solo se puede probar antes de ejecutar con processing porque el puerto solo se puede usar en una ocasion
  //Serial.println(sensorValue,DEC);//al compilar y dar en Monitor Serie... si muevo el potencionetro cambia el numero que se va imprimiendo

  //Enviar datos por puerto serial a processing
  Serial.write(sensorValue);
  delay(100);
}

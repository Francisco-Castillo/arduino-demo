#include <Arduino.h>

int led = 13;
int retardo = 1000;
char caracter;

void obtenerValorRetardo(char caracter){
  switch (caracter) {
    case 'r':
      retardo = 500;
      Serial.println("Rapido");
      break;

    case 'i':
      retardo = 2000;
      Serial.println("Lento");
      break;

    case 'd':
      retardo = 1000;
      Serial.println("Defecto");
      break;
  }
}

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0) {
    caracter = Serial.read();

    obtenerValorRetardo(caracter);

    digitalWrite(led, HIGH);
    delay(retardo);
    digitalWrite(led, LOW);
    delay(retardo);

    Serial.println(retardo);
  }
}

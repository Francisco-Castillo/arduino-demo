#include <Arduino.h>

int led = 13;
char caracter;

void operarLed(char caracter){
  switch (caracter) {
    case 'e':
      digitalWrite(led, HIGH);
      Serial.println("Encendido");
      break;

    case 'a':
      digitalWrite(led, LOW);
      Serial.println("Apagado");
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
    operarLed(caracter);
  }
}

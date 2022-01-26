#include <Arduino.h>

int ledVerde = 11;
int ledAmarillo = 12;
int ledRojo = 13;
int tiempoEspera = 5000;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledRojo, HIGH);
  delay(tiempoEspera);
  digitalWrite(ledRojo, LOW);

  digitalWrite(ledAmarillo, HIGH);
  delay(tiempoEspera);
  digitalWrite(ledAmarillo, LOW);

  digitalWrite(ledVerde, HIGH);
  delay(tiempoEspera);
  digitalWrite(ledVerde, LOW);
}

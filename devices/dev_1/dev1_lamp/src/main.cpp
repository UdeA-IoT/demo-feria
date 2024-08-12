#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

#include "led_control.h"

// Puertos
#define LIGHT_PIN 2 

// Create an object of the LEDControl class
LEDControl lamp1(LIGHT_PIN);

// Inicializacion
void setup() {
  // None
  pinMode(LIGHT_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Config OK...");

  
}

// Ciclo infinito
void loop() {
  lamp1.on();
  //digitalWrite(LIGHT_PIN,HIGH);
  delay(500);                       
  lamp1.off();
  //digitalWrite(LIGHT_PIN,LOW);
  delay(500);     
  Serial.println(".");                 
}
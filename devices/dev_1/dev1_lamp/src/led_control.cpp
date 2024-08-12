#include "led_control.h"

// Constructor implementation
LEDControl::LEDControl(int pin) {
    ledPin = pin;
    status = LOW;
}

LEDControl::LEDControl(int pin, String id) {
    ledPin = pin;
    ledId = id;
}

// Method to initialize the LED pin
void LEDControl::begin() {
    pinMode(ledPin, OUTPUT);
}

// Method to turn on the LED 
void LEDControl::on() {
    digitalWrite(ledPin, HIGH);   // Turn the LED on
    status = HIGH;
}

// Method to turn off the LED with a specified delay
void LEDControl::off() {
    digitalWrite(ledPin, LOW);    // Turn the LED off
    status = LOW;
}


int LEDControl::getStatus() {
    return status;
}

void LEDControl::addTopic(String topic, int mode) {
    const int MODE_PUB = 0;
    const int MODE_SUB = 1;
    if(mode == MODE_PUB) {
        pubTopics.push_back(topic);
    }
    else if(mode == MODE_SUB) {
        subTopics.push_back(topic);
    }
}


#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include <Arduino.h>
#include <Vector.h>


class LEDControl {
  private:
    int ledPin;  // Pin where the LED is connected
    int status;  // led status
    String ledId;
    Vector<String> pubTopics; 
    Vector<String> subTopics; 

  public:
    // Constructor
    LEDControl(int pin);
    LEDControl(int pin, String id);

    // Method to initialize the LED pin
    void begin();

    // Methods
    void on();
    void off();
    int getStatus();
    void addTopic(String topic, int mode);
    String getPubTopics();
    String getSubTopics();
};

#endif
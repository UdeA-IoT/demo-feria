#pragma once
#include <string>

using namespace std;

// ESP32 I/O config
#define LIGHT_PIN 2

// WiFi credentials
const char *SSID = "IoT";
const char *PASSWORD = "1245678h";

// MQTT settings
const string ID = "id-dev1";

const string BROKER = "192.168.43.55";

const string TOPIC = "house/device/" + ID;
const string STATUS_TOPIC = TOPIC + "/lights/state";  // P
const string CONTROL_TOPIC = TOPIC + "/lights/control"; // S


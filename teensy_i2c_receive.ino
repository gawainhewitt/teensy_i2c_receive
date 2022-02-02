#include <Wire.h>

// #define Wire Wire1 // use this to specify a different i2c bus - For example: #define Wire Wire1 means that we are using bus 1 instead of bus 0 as default.


void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.requestFrom(8, 6);    // request 6 bytes from peripheral device #8

  while (Wire.available()) { // peripheral may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.println(c);         // print the character
  }

  delay(500);
}

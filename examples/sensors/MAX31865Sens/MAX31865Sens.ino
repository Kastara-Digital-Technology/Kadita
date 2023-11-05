#include <Kadita.h>

MAX31865Sens thermo(10, 11, 12, 13, MAX31865_3WIRE);

float temperature;

void setup() {
  Serial.begin(9600);
  thermo.init();
}

void loop() {
  thermo.update();
  temperature = thermo.getValueTemperature();
  Serial.print("| temperature: ");
  Serial.print(temperature);
  Serial.println();
  delay(1000);  // optional
}

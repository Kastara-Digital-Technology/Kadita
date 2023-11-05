#include <Kadita.h>

MAX6675Sens thermo(4, 5, 6);

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

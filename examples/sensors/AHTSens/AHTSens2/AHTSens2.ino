#include <Kadita.h>

AHTSens aht;

float value[2];

void setup() {
  Serial.begin(9600);
  aht.init();
}

void loop() {
  aht.update();
  aht.getValue(value);
  Serial.print("| temperature: ");
  Serial.print(value[AHT_SENS_TEMPERATURE]);
  Serial.print("| humidity: ");
  Serial.print(value[AHT_SENS_HUMIDITY]);
  delay(1000);  // optional
}

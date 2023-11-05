#include <Kadita.h>

AHTSens aht;

float temperature, humidity;

void setup() {
  Serial.begin(9600);
  aht.init();
}

void loop() {
  aht.update();
  temperature = aht.getValueTemperature();
  humidity = aht.getValueHumidity();
  Serial.print("| temperature: ");
  Serial.print(temperature);
  Serial.print("| humidity: ");
  Serial.print(humidity);
  delay(1000);  // optional
}

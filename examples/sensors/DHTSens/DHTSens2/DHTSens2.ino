#include <Kadita.h>

DHTSens dht(2, DHT22);

float value[2];

void setup() {
  Serial.begin(9600);
  dht.init();
}

void loop() {
  dht.update();
  dht.getValue(value);
  Serial.print("| temperature: ");
  Serial.print(value[DHT_SENS_TEMPERATURE]);
  Serial.print("| humidity: ");
  Serial.print(value[DHT_SENS_HUMIDITY]);
  Serial.println();
  delay(1000);  // optional
}

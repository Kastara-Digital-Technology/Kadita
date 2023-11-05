#include <Kadita.h>

UltrasonicSens sonar(12, 11);

float cm;

void setup() {
  Serial.begin(9600);
  sonar.init();
}

void loop() {
  sonar.update();
  cm = sonar.getValueCm();
  Serial.print("| cm: ");
  Serial.print(cm);
  Serial.println();
  delay(1000);  // optional
}

#include <Kadita.h>

void flowInterruptCallback();

FlowmeterSens flow(2, flowInterruptCallback);

float currentRate, currentVolume, totalRate, totalVolume;

void setup() {
  Serial.begin(9600);
  flow.init();
}

void loop() {
  flow.update();
  currentRate = flow.getValueFlowMeter(FLOW_METER_CURRENT_RATE);
  currentVolume = flow.getValueFlowMeter(FLOW_METER_CURRENT_VOLUME);
  totalRate = flow.getValueFlowMeter(FLOW_METER_TOTAL_RATE);
  totalVolume = flow.getValueFlowMeter(FLOW_METER_TOTAL_VOLUME);
  Serial.print("| currentRate: ");
  Serial.print(currentRate);
  Serial.print("| currentVolume: ");
  Serial.print(currentVolume);
  Serial.print("| totalRate: ");
  Serial.print(totalRate);
  Serial.print("| totalVolume: ");
  Serial.print(totalVolume);
  Serial.println();
  delay(1000); // optional
}

void flowInterruptCallback() {
  flow.process();
}
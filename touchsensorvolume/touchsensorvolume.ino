#include <Adafruit_CircuitPlayground.h>
int value;
int freq;
void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin.(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A3);
  //delay(1000);
  Serial.println(value);

  freq=map(value, 0, 1023, 100, 1000);
  CircuitPlayground.PlayTone(freq,1000);
}

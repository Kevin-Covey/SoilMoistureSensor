#include <MicroView.h>

int moistureSensor = 0;
int moistureValue;

void setup() {
  uView.begin();
  uView.clear(PAGE);
  uView.setFontType(3);
}

void loop() {
  moistureValue = analogRead(moistureSensor);
  uView.clear();
  uView.setCursor(0, 0);
  uView.print(moistureValue);
  uView.display();
  delay(500);
}

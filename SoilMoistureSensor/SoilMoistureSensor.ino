#include <MicroView.h>

int moistureSensorPin = 0;
int speakerPin = 0;

void setup() {
  uView.begin();
  uView.setFontType(3);
  
}

void loop() {
  int moistureValue = checkMoisture();
  uView.clear(PAGE);
  uView.setCursor(16, 0);
  uView.print(moistureValue);
  uView.display();
  if (moistureValue < 500) {
    tone(speakerPin, 4699, 250);
  }
  delay(500);
}

int checkMoisture() {
  int moistureValue = analogRead(moistureSensorPin);
  moistureValue = map(moistureValue, 0, 1023, 100, 999);
  return constrain(moistureValue, 100, 999);
}

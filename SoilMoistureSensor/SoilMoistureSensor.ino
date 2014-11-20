#include <MicroView.h>

int moistureSensorPin = 0;
int speakerPin = 0;
int moistureValue;

void setup() {
  uView.begin();
  uView.setFontType(3);
  
}

void loop() {
  moistureValue = analogRead(moistureSensorPin);
  uView.clear(PAGE);
  uView.setCursor(0, 0);
  uView.print(moistureValue);
  uView.display();
  if (moistureValue < 500) {
    tone(speakerPin, 4186, 250);
  }
  delay(500);
}

#include <MicroView.h>

void setup() {
  uView.begin();
  uView.clear(PAGE);
  uView.println();
  uView.println();
  uView.println("Hello");
  uView.println("World!");
  uView.display();
}

void loop() {}

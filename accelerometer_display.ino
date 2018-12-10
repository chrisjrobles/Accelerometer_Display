#include <Adafruit_CircuitPlayground.h>

float X, Y, Z;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(50);
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

  Serial.print("X: ");
  Serial.print(X);
  Serial.print("  Y: ");
  Serial.print(Y);
  Serial.print("  Z: ");
  Serial.println(Z);

  float red = 12.5 * Z + 127.5, blue = -12 * Z + 127.5;

  if (red > 255) {
    red = 255;
    blue = 0;
  } else if (blue > 255) {
    blue = 255;
    red = 0;
  } else {
    red = 13 * Z + 127.5;
    blue = -13 * Z + 127.5;
  }

  CircuitPlayground.setPixelColor(0, red, 0, blue);
  CircuitPlayground.setPixelColor(1, red, 0, blue);
  CircuitPlayground.setPixelColor(2, red, 0, blue);
  CircuitPlayground.setPixelColor(3, red, 0, blue);
  CircuitPlayground.setPixelColor(4, red, 0, blue);
  CircuitPlayground.setPixelColor(5, red, 0, blue);
  CircuitPlayground.setPixelColor(6, red, 0, blue);
  CircuitPlayground.setPixelColor(7, red, 0, blue);
  CircuitPlayground.setPixelColor(8, red, 0, blue);
  CircuitPlayground.setPixelColor(9, red, 0, blue);
  CircuitPlayground.setPixelColor(10, red, 0, blue);
  
  delay(10);
}

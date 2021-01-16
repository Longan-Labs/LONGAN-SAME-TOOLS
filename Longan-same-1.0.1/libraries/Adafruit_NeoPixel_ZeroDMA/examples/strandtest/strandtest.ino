// This is a PARED-DOWN NeoPixel example for the Adafruit_NeoPixel_ZeroDMA
// library, demonstrating pin declarations, etc.  For more complete examples
// of NeoPixel operations, see the examples included with the 'regular'
// Adafruit_NeoPixel library.

// Also requires LATEST Adafruit_NeoPixel and Adafruit_ZeroDMA libraries.

#include <Adafruit_NeoPixel_ZeroDMA.h>

#define PIN        12
#define NUM_PIXELS 1

Adafruit_NeoPixel_ZeroDMA strip(NUM_PIXELS, PIN, NEO_GRB);


void setRGB(int r, int g, int b)
{
    strip.setPixelColor(0, r, g, b);
    strip.show();
}

void setup() {
    strip.begin();
    strip.setBrightness(32);
    strip.show();
}

void loop() {
    setRGB(255, 0, 0);      // red
    delay(500);
    setRGB(0, 255, 0);      // green
    delay(500);
    setRGB(0, 0, 255);      // blue
    delay(500);
}

// END FILE
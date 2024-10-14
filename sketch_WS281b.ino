#include <Adafruit_NeoPixel.h>
#define LED_PIN    2       // Digital pin connected to the LED strip
#define LED_COUNT  1      // Number of LEDs in the strip
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin();     // Initialize the LED strip
  strip.show();      // Turn off all LEDs initially
}
void loop() {
  // Set all LEDs to red
  
    strip.setPixelColor(0, strip.Color(0, 100, 0));  // Red color (RGB values)

  
        strip.show();  // Send the updated pixel colors to the strip
  delay(300); // Wait for 1 second before changing colors

  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  // strip.Color(0,0,100);
  delay(300);
  strip.setPixelColor(0, strip.Color(0, 0, 255));
  strip.show();
  // strip.Color(0,0,100);
  delay(300);
    strip.setPixelColor(0, strip.Color(50, 60, 100));
  strip.show();
  // strip.Color(0,0,100);
  delay(300);
      strip.setPixelColor(0, strip.Color(70, 60, 80));
  strip.show();
  // strip.Color(0,0,100);
  delay(300);
}

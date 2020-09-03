#include <Adafruit_NeoPixel.h>

#define PIN            4

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 75; // delay for half a second

void setup() 
{
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() 
{
//  left();
//  pixels.clear();
//  right();
  white();
  pixels.clear();
}
void white()
{
    pixels.setPixelColor(0, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(1, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(2, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(3, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(4, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(5, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(6, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(7, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(8, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(9, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(10, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(11, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.setPixelColor(12, pixels.Color(255,255,255)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).
}
void left()
{
    for(int i=0;i<7;i++)
  {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,75,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).
  }
}
void right()
{
    for(int i=12;i>=5;i--)
  {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,75,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).
  }
}

#include <Adafruit_NeoPixel.h>

#define PIN            4
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 250; 
int red = 255;
int green = 50;
int blue = 0;
int bright = 255;
char choix = 't';

void setup() 
{
  pixels.begin(); 
}

void loop() 
{
  pixels.setBrightness(bright);
  pixels.clear();
  rosa();
}
void bolt()
{
    pixels.setPixelColor(0, pixels.Color(255,255,255)); 
    pixels.setPixelColor(1, pixels.Color(255,255,255)); 
    pixels.setPixelColor(2, pixels.Color(255,255,255)); 
    pixels.setPixelColor(3, pixels.Color(255,255,255)); 
    pixels.setPixelColor(4, pixels.Color(255,255,255)); 
    pixels.setPixelColor(5, pixels.Color(255,255,255)); 
    pixels.setPixelColor(6, pixels.Color(255,255,255)); 
    pixels.setPixelColor(7, pixels.Color(255,255,255)); 
    pixels.setPixelColor(8, pixels.Color(255,255,255)); 
    pixels.setPixelColor(9, pixels.Color(255,255,255)); 
    pixels.setPixelColor(10, pixels.Color(255,255,255)); 
    pixels.setPixelColor(11, pixels.Color(255,255,255)); 
    pixels.setPixelColor(12, pixels.Color(255,255,255)); 
    pixels.show(); 
}
void amy()
{
  while(true){
    for(int i=0;i<NUMPIXELS;i++)
  {
    
    pixels.setPixelColor(i, pixels.Color(red,green,blue)); 
    pixels.show(); 
    delay(delayval); 
  }
  pixels.clear();
  }
}
void jake()
{
    for(int i=NUMPIXELS;i>=0;i--)
  {
    
    pixels.setPixelColor(i, pixels.Color(red,green,blue)); 
    pixels.show(); 
    delay(delayval); 
  }
}
void rosa()
{
  switch (choix)
  {
  case 'l':
    pixels.clear();
    amy();
    break;
  case 'r':
    pixels.clear();
    jake();
    break;
  case 's':
    pixels.clear();
    break;
  case 't':
    pixels.clear();
    bolt();
    break;
  default:
    pixels.clear();
    break;
  }
}

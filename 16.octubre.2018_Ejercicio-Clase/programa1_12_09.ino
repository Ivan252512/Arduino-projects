#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display=Adafruit_PCD8544(3,4,5,7,6);

void setup() {
  // put your setup code here, to run once:
display.begin();
  display.setContrast(60);

display.display();
delay(1);
display.clearDisplay();
}

void loop() {
  // put your main code here, to run repeatedly:
int y=0;

for (float x=0;x<=84;x++){
  y=(-23*sin(x/13))+23;
  display.drawPixel(x,y,BLACK);
  display.display();
}
}

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
for (int r=0;r<=18;r++){
for (long y=0;y<=48;y++){
for (long x=0;x<=84;x++){
 if (((x-42)*(x-42)+(y-24)*(y-24))>=r*r-3*(0.25*r) && ((x-42)*(x-42)+(y-24)*(y-24))<=r*r+3*(0.25*r)){
  display.drawPixel(x,y,BLACK);
  display.display();
  }
}
}
display.clearDisplay();
}
}

#define NORMAL_SPEED

#include <AnimatedGIF.h>
AnimatedGIF gif;

#include "out.h"

#define GIF_IMAGE arquivo   

#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);

  tft.begin();
#ifdef USE_DMA
  tft.initDMA();
#endif
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);

  gif.begin(BIG_ENDIAN_PIXELS);
}

#ifdef NORMAL_SPEED 
void loop()
{
  if (gif.open((uint8_t *)GIF_IMAGE, sizeof(GIF_IMAGE), GIFDraw))
  {
    Serial.printf("Successfully opened GIF; Canvas size = %d x %d\n", gif.getCanvasWidth(), gif.getCanvasHeight());
    tft.startWrite();
    while (gif.playFrame(true, NULL))
    {
      yield();
    }
    gif.close();
    tft.endWrite();
  }
}
#else 
void loop()
{
  long lTime = micros();
  int iFrames = 0;

  if (gif.open((uint8_t *)GIF_IMAGE, sizeof(GIF_IMAGE), GIFDraw))
  {
    tft.startWrite(); 
    while (gif.playFrame(false, NULL))
    {
      iFrames++;
      yield();
    }
    gif.close();
    tft.endWrite(); 
    lTime = micros() - lTime;
    Serial.print(iFrames / (lTime / 1000000.0));
    Serial.println(" fps");
  }
}
#endif
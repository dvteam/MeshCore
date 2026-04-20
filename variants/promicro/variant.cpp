#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"

const uint32_t g_ADigitalPinMap[] = {
  8, 6, 17, 20, 22, 24, 32, 11, 36, 38,
  9, 10, 43, 45, 47, 2, 29, 31,
  33, 34, 71,
  13, 15
};

#if defined(EINK_DISPLAY_MODEL)
  const int MISO = PIN_SPI1_MISO; // PIN_DISPLAY_MISO 
  const int MOSI = PIN_SPI1_MOSI; // PIN_DISPLAY_MOSI 
  const int SCK  = PIN_SPI1_SCK; // PIN_DISPLAY_SCLK 
#endif

void initVariant()
{
}


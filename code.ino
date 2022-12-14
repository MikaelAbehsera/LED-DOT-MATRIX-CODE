#include "LedControl.h"
#include "binary.h"

LedControl lc = LedControl(12, 11, 10, 1);

unsigned long delaytime = 1000;

// happy face
byte hf[8] = { B00111100, B01000010, B10100101, B10000001, B10100101, B10011001, B01000010, B00111100 };
// neutral face
byte nf[8] = { B00111100, B01000010, B10100101, B10000001, B10111101, B10000001, B01000010, B00111100 };
// sad face
byte sf[8] = { B00111100, B01000010, B10100101, B10000001, B10011001, B10100101, B01000010, B00111100 };
// H
byte letterH[3] = { B11111111, B11111111, B11111111 };


void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  // Set brightness to a medium value
  lc.setIntensity(0, 8);
  // Clear the display
  lc.clearDisplay(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  //setLed(addr, row, col, state)
  //setRow(addr, row, value)
  //setCol(addr, column, value)

  // Letter H
  lc.setColumn(0, 0, letterH[0]);
  lc.setColumn(0, 7, letterH[1]);
  lc.setRow(0, 4, letterH[2]);


  //   // sad face
  //   lc.setRow(0, 0, sf[0]);
  //   lc.setRow(0, 1, sf[1]);
  //   lc.setRow(0, 2, sf[2]);
  //   lc.setRow(0, 3, sf[3]);
  //   lc.setRow(0, 4, sf[4]);
  //   lc.setRow(0, 5, sf[5]);
  //   lc.setRow(0, 6, sf[6]);
  //   lc.setRow(0, 7, sf[7]);
  //   delay(delaytime);
}

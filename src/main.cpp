#include <Arduino.h>
#include "DisplayHelper.h"

DisplayHelper* displayHelper;
int number = 10;
int count = 0;

// pin definitions
int A = 18;
int B = 19;
int C = 21;
int D = 16;
int E = 17;
int F = 22;
int G = 23;

// mux definitions
int MUX_ZERO = 2;
int MUX_ONE = 4;

void setup() {
  Serial.begin(9600);
  displayHelper = new DisplayHelper(
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    MUX_ZERO,
    MUX_ONE
  );
}

void loop() {
  displayHelper->display_number(number);
  count++;
  if (count == 100) {
    count = 0;
    number++;
  }
}
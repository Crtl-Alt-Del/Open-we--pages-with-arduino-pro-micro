#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  Keyboard.begin();

  // Start Payload
  Keyboard.press(KEY_LEFT_ALT);
  delay(1000)
;  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();
delay(750)  
;Keyboard.print("firefox www.youtube.com/watch?v=dQw4w9WgXcQ");
delay(100)
;Keyboard.press(KEY_RETURN)
  // End Payload
;Keyboard.releaseAll()
  // Stop Keyboard and Mouse
;  Keyboard.end();
}

// Unused
void loop() {}
# Open-web-pages-with-arduino-pro-micro

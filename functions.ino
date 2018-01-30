
void initDuck() {
  Keyboard.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}

void openProgram(String program) {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.println(program);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  blinkLed(1, 50);
  digitalWrite(LED_BUILTIN, HIGH);
}

void blinkLed(int count, int timeDelay) {
   boolean state = false;
   for(int i=0; i < (count*2)+1; i++) {
    digitalWrite(LED_BUILTIN, state);
    state = !state;
    delay(timeDelay);
   }
}

void tabber(int count) {
  for(int i=0; i < count; i++) {
      Keyboard.press(KEY_TAB);
      Keyboard.releaseAll();
      delay(20);
    }
}

void enter(int delayTime) {
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(delayTime);
}


#include <M5StickCPlus.h>

// ピンポン(ボタン押した時)
void chime() {
  M5.Beep.tone(659, 300);
  delay(300);
  M5.Beep.tone(523, 1000);
}

void setup() {
  M5.begin();
  M5.Beep.setBeep(4000, 100);// init
}

void loop() {
  M5.update();// ボタンの状態更新
  M5.Beep.update();// tone関数の経過秒数更新

  if (M5.BtnA.wasPressed()) {
    chime();
  }
  if (M5.BtnB.wasPressed()) {
    M5.Beep.beep();
  }
}
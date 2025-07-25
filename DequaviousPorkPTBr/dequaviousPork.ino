//This DigiKeyboard Script turns Rick Astley to Risk ASCII and made him to dance and sing Never Let You Down inside your PowerShell screen./

#include "DigiKeyboardPtBr.h"

void setup(){
  //empity
}

void loop(){

  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("cmd");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("start https://m.media-amazon.com/images/I/41B7fjg2d-L.jpg");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);

  for (;;){/*empty*/}
}
# IOエキスパンダ (MCP23017)

## 配線
  MCP23017 <---> ArduinoUno
  VDD <---> 5V

  VSS <---> GND

  SCL <---> A5(SCL)
  
  SDA <---> A4(SDA)

## 補足
  * Adafruit_MCP23017ライブラリを利用 
  * begin関数の引数は0でしか機能しなかった（アドレス設定は0x20）
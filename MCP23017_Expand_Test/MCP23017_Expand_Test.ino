#include <Adafruit_MCP23017.h>
#include <Wire.h>

Adafruit_MCP23017 mcp;

void setup() {
  mcp.begin(0);
  delay(500);
  mcp.pinMode(14, OUTPUT);
}

void loop() {
  mcp.digitalWrite(14, HIGH);
  delay(1000);
  mcp.digitalWrite(14, LOW);
  delay(1000);  
}

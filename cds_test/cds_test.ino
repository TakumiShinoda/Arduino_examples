#define PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(PIN));

  delay(500);
}

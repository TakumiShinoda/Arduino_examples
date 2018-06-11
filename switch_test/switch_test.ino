#define PIN 7

void setup() {
  Serial.begin(9600);
  pinMode(PIN, INPUT);
}

void loop() {
  if(digitalRead(PIN)){
    Serial.println("on");
  }else{
    Serial.println("off");
  }
}

#define speedPin 26
#define motorOutCW 25
#define motorOutCCW 12
#define switchDirButton 39
#define LED 13

const speed = 255;
const buttonDelay = 200;

bool CW = true;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(motorOutCW, OUTPUT);
  pinMode(motorOutCCW, OUTPUT);
  pinMode(switchDirButton, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  analogWrite(speedPin, speed);
}

void loop() {
  digitalWrite(LED, LOW);
  digitalWrite(motorOutCW, CW);
  digitalWrite(motorOutCCW, !CW);
  if (digitalRead(switchDirButton)) {
    digitalWrite(LED, HIGH);
    CW = !CW;
    delay(buttonDelay);
  }
}

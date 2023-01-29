#define LED 13

int lowIntensity = 10;
int highIntensity = 255;
int changeRate = 5;
int changeDelay = 20;
int stopDelay = 200;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int intensity = lowIntensity; intensity <= highIntensity; intensity += changeRate) {
    analogWrite(LED, intensity);
    delay(changeDelay);
  }
  delay(stopDelay);
  for (int intensity = highIntensity; intensity > lowIntensity; intensity -= changeRate) {
    analogWrite(LED, intensity);
    delay(changeDelay);
  }
  delay(stopDelay);
}

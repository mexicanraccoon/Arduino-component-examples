
const int buzzPin = 9;
int sound = 1;

void setup() {
  // put your setup code here, to run once
}

void loop() {
  // put your main code here, to run repeatedly:

  tone(buzzPin, sound);
  delay(3);
  sound = sound + 4;

  if (sound > 1500) sound = 100;

}

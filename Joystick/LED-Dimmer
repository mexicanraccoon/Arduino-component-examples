
#define statusLED 9

const int YPin = A0;

int Yvalue = 0;
int brightness = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Yvalue = analogRead(YPin);

  brightness = map(Yvalue, 0, 1023, 0, 255);

  analogWrite(statusLED, brightness);

  Serial.println(brightness);

  delay(2);

}

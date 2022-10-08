const int buttonPin = 8;
const int ledPin = 13;
int buttonState = 0;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(count);
  delay(1000);
  count++;

  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    count = 0;
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}

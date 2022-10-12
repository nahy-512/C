// 조도 센서를 활용해 LED ON/OFF
int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int cds = analogRead(A0);
  Serial.print(cds); Serial.print("\n");

  if (cds < 512) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(200);
}

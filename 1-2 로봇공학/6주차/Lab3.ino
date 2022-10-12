// 202234860 김나현 

const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int readValue = analogRead(A0); // 아날로그 신호 측정
  Serial.println(readValue);

  digitalWrite(ledPin, HIGH);
  delay(readValue);
  analogWrite(ledPin, LOW);
  delay(readValue);
}

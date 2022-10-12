// RGB + 가변저항

const int ledB = 13; const int ledR = 12; const int ledG = 11;

void setup() {
  Serial.begin(9600);
  pinMode(ledB, OUTPUT);
}

void loop() {
  int readValueR = analogRead(A1), readValueG = analogRead(A2), readValueB = analogRead(A0);// 아날로그 신호 측정
  Serial.println(readValueR);
  Serial.println(readValueG);
  Serial.println(readValueB);
  Serial.print("\n");

  analogWrite(ledR, (readValueR/4) );
  analogWrite(ledG, (readValueG/4) );
  analogWrite(ledB, (readValueB/4) );
  delay(500);
}

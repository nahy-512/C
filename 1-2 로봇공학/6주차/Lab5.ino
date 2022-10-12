// 202234860 김나현 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  float voltage = value * 5.0 / 1024.0;
  float temp = 100.0 * voltage;
  Serial.println(temp);
  delay(1000);
}

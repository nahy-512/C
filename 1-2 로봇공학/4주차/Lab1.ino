void setup() {
  Serial.begin(9600);

}

int incomingByte = 0;

void loop() {
  Serial.println(incomingByte);
  delay(1000);
  incomingByte++;
//  if (Serial.available() > 0) {
//    incomingByte = Serial.read();
//    Serial.print("I received: ");
//    Serial.println(incomingByte, DEC);
}

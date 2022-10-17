// Lab 3
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i=0; i<256; i++) {  // 0부터 255까지 256번 반복
    analogWrite(10, i);     // 아날로그 출력을 통해 LED 밝기 제어
    analogWrite(11, 255-i);   // 하나가 밝아지는 동안 다른 하나는 어두워짐
    delay(10);
  }
}

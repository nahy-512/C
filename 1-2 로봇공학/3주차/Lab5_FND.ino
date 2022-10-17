// Lab 5
void setup()
{
  for (int i=2; i<=9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,0);
  digitalWrite(6, 0); digitalWrite(7, 0); digitalWrite(8, 1); digitalWrite(9, 1);
  delay(1000); //0
  
  digitalWrite(2, 1); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,1);
  digitalWrite(6, 1); digitalWrite(7, 1); digitalWrite(8, 1); digitalWrite(9, 1);
  delay(1000); //1
  
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 1); digitalWrite(5,0);
  digitalWrite(6, 0); digitalWrite(7, 1); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //2
  
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,0);
  digitalWrite(6, 1); digitalWrite(7, 1); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //3
  
  digitalWrite(2, 1); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,1);
  digitalWrite(6, 1); digitalWrite(7, 0); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //4
  
  digitalWrite(2, 0); digitalWrite(3, 1); digitalWrite(4, 0); digitalWrite(5, 0);
  digitalWrite(6, 1); digitalWrite(7, 0); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //5
  
  digitalWrite(2, 0); digitalWrite(3, 1); digitalWrite(4, 0); digitalWrite(5, 0);
  digitalWrite(6, 0); digitalWrite(7, 0); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //6
  
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,1);
  digitalWrite(6, 1); digitalWrite(7, 0); digitalWrite(8, 1); digitalWrite(9, 1);
  delay(1000); //7
  
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,0);
  digitalWrite(6, 0); digitalWrite(7, 0); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //8
  
  digitalWrite(2, 0); digitalWrite(3, 0); digitalWrite(4, 0); digitalWrite(5,0);
  digitalWrite(6, 1); digitalWrite(7, 0); digitalWrite(8, 0); digitalWrite(9, 1);
  delay(1000); //9
}

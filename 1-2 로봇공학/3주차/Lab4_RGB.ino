// Lab 4
void setup()
{
  for (int i=9; i<=11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  Red();
  Green();
  Blue();
  
  /* combinations of colors */
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
}

void Red()
{
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
}

void Green()
{
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}

void Blue()
{
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
}

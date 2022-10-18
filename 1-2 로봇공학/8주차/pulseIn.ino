int outPin = 2;
int inPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(outPin, OUTPUT);
  pinMode(inPin, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(outPin, HIGH);
  delayMicroseconds(50);
  digitalWrite(outPin, LOW);
  int duration = pulseIn(3, HIGH);
  Serial.print("duration= ");
  Serial.println(duration);
  if(duration ==0) {
    return ;
  }
  
  tone(9,1000,20);
  delay(200);
  noTone(9);
  delay(duration);
}

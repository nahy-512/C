// 조도센서를 이용한 LED 밝기 조절 + 스위치 버튼

const int ledPin = 9;
const int buttonPin = 10;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int cds = analogRead(A0);
  int bright = map(cds, 0, 1023, 255, 0); //255 - (cds/4)
  
  Serial.print(cds); Serial.print(bright); Serial.print("\n");
  
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // 버튼 클릭 여부
    analogWrite(ledPin, bright); // 조도센서를 통한 LED 밝기 조절 
  }
  else {
    analogWrite(ledPin, LOW);
  }
  delay(500);
}

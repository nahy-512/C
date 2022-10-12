void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //  Serial.print(78);
  //  Serial.print(1.23456);
  //  Serial.print('N');
  //  Serial.print("Hello world.");
  //  Serial.print(78, BIN);
  //  Serial.print(78, OCT);
  //  Serial.print(78, DEC);
  //  Serial.print(78, HEX);
  //  Serial.print(1.23456, 0);
  //  Serial.print(1.23456, 2);
  //  Serial.print(1.23456, 4);
}



void loop() {
  // put your main code here, to run repeatedly:
  
  int ret;
  if ((ret = Serial.available()) > 0) // send data only when
  {
    //Serial.println(ret);
   
//    int incomingByte = Serial.read();
//    Serial.print("Serial.print: ");
//    Serial.println(incomingByte);
//    Serial.print("Serial.write: ");
//    Serial.write(incomingByte);
    int par = Serial.parseInt();
    Serial.print("Serial.parseIng: ");
    Serial.println(par);
  } // returm 0;
  //delay(500);
}

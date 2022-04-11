void setup() {
  // put your setup code here, to run once:
 pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(7,2000);
delay(100);
noTone(7);
delay(500);
}

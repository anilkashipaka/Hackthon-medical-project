void setup() {
  // put your setup code here, to run once:
  pinMode(D0,INPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int s = digitalRead(D0);
 float p = analogRead(A0);
 if(s==1){
  delay(1000);
 Serial.println("analog");
 Serial.println(p);
 }
}

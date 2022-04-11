#define motor1  D0
#define motor2 D2
void setup(){
  pinMode(D0,OUTPUT);
  pinMode(D2,OUTPUT);
}
void loop(){
  digitalWrite(D0,HIGH);
  digitalWrite(D2,LOW);
}

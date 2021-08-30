int pwm=255;
int pwm2=255;

void setup() {
  // put your setup code here, to run once:
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);

 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);

}

void loop() {
  analogWrite(9,pwm);
  analogWrite(10,0);
  
  analogWrite(6,pwm2);
  analogWrite(7,0);
  delay(10);
}

int IRSensor = 8; // connect ir sensor to arduino pin 12
int LED = 9;

void setup()
{
  Serial.begin(9600);
pinMode (IRSensor,INPUT); // sensor pin INPUT
pinMode(LED,OUTPUT);

}

void loop()
{
int statusSensor = digitalRead(IRSensor);

if(statusSensor == HIGH)
{
digitalWrite(LED, HIGH); // LED High
}
if(statusSensor == LOW)
{
digitalWrite(LED, LOW); // LED LOW
}
}

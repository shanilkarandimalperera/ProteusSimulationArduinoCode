void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  for(int value = 8; value <= 13; value++)
  {
    digitalWrite(value,HIGH);
    delay(100);
    digitalWrite(value,LOW);
    delay(100);
    }
   for(int value = 13; value >= 8; value--)
   {
    digitalWrite(value,HIGH);
    delay(100);
    digitalWrite(value,LOW);
    delay(100);
    }
  
}

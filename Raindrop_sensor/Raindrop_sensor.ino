void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int rain = digitalRead(10);

  if(rain==1)
  {
    Serial.println("Rainning");
    
    }
    else if(rain==0)
    {
      Serial.println("Not Rainning");
      }
      delay(1000);

}

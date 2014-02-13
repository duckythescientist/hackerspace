int sensePin = 3;

void setup()
{
  pinMode(sensePin, INPUT);
  Serial.begin(115200);
  
}


void loop()
{
  int val = analogRead(sensePin);
  Serial.println(val);
  delay(100);
}

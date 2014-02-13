int speakerPin = 7;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if(Serial.available())
  {
    int freq = Serial.parseInt();
    tone(speakerPin, freq);
  }
  
}

int ledR = 9;
int ledG = 10;
int ledB = 11;

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop()
{
  
  setColor(255, 0, 0);
  delay(1000);
  setColor(0, 255, 0);
  delay(1000);
  setColor(0, 0, 255);
  delay(1000);
  
  setColor(255, 255, 255);
  delay(1000);
  
  for(int i=0; i<10; i++)
  {
    setColor(random(256), random(256), random(256));
    delay(200);
  }
  
  
  for(int i=0; i<256; i++)
  {
    setColor(0, i, 255-i);
    delay(10);
  }
  for(int i=0; i<256; i++)
  {
    setColor(255-i, 0, i);
    delay(10);
  }
  for(int i=0; i<256; i++)
  {
    setColor(i, 255-i, 0);
    delay(10);
  }
  
}
  



void setColor(byte r, byte g, byte b)
{
  analogWrite(ledR, r);
  analogWrite(ledG, g);
  analogWrite(ledB, b);
}


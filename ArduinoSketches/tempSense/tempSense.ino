#include <math.h>

int sensePin = 3;

void setup()
{
  pinMode(sensePin, INPUT);
  Serial.begin(115200);
  
}


void loop()
{
  int val = analogRead(sensePin);
  float resistance = 10240/float(val) - 10;
  float tempK = 1.0 / (3.354E-3 + 2.570E-4 * log(resistance / 10.0) );
  float tempC = tempK - 273.15;
  float tempF = tempC * 9.0/5.0 + 32;
  
  Serial.print(resistance, 2);
  Serial.print("  :  ");
  Serial.println(tempF, 4);
  delay(100);
}

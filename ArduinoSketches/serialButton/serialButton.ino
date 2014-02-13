int button = 3; //digital pin
int pot = 3; //analog pin 3


void setup()
{
  pinMode(button, INPUT);
  //digitalWrite(button, HIGH); //set internal pullup
  
  pinMode(pot, INPUT);
  
  Serial.begin(115200);
  Serial.println("Hello, World!");
}


void loop()
{
  if(Serial.available())
  {
    Serial.print("You said: ");
    while(Serial.available())
    {
      //spit back what was sent
      byte buf = Serial.read();
      Serial.write(buf);
    }
    Serial.println();
    Serial.print("Pot status: ");
    Serial.println(analogRead(pot));
  }
  
  delay(100);
  
  if(!digitalRead(button)) //button pressed
  {
    Serial.println("Button pressed!");
    delay(100);
    while(!digitalRead(button))
    {
      delay(10); //wait until button release
    }
    Serial.println("Button released");
  }
  
}
    

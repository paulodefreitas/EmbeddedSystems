int ledPin[] = {7,8,9,10};

void setup()
{
  for (int i =0;i<4;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() 
{
  for (int i =0;i<4;i++)
  {
    digitalWrite(ledPin[i], HIGH);
  }
}

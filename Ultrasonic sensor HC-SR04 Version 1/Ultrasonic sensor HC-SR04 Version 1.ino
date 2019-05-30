int echoPino = 12; // Pin 12 receives the echo pulse
int trigPino = 13; // Pin 13 sends the pulse to generate echo
long duration = 0;
long distance = 0;
void setup()
{
  Serial.begin(9600); // Start the serial port
  pinMode(echoPino, INPUT); // Defines pin 12 as input (receive)
  pinMode(trigPino, OUTPUT); // Define pin 13 as output (send)
}

void loop()
{
  // Trigger pin with a low pulse LOW (off)
  digitalWrite(trigPino, LOW);

  // Delay (delay) of 10 microseconds
  delayMicroseconds(10);
  // Trigger pin with pulse HIGH (on)
  digitalWrite(trigPino, HIGH);
  // Delay (delay) of 10 microseconds
  delayMicroseconds(10);
  // Trigger pin with a low pulse LOW again
  digitalWrite(trigPino, LOW);
  // The pulseInt function checks the time the ECHO pin was HIGH Calculating in this way the duration of the signal traffic
  duration = pulseIn(echoPino, HIGH);
  // Calculation based on: distance = duration / 58.
  distance = duration / 58;

  Serial.print("Distance in centimeters: ");
  Serial.println(distance);
  delay(100);
}

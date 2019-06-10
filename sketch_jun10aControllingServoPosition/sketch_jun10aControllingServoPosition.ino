#include "Servo.h"
Servo servo;
int Pinpotenciometro = 0;
int PinservoMotor = 6;
int valorPot;
int valorMotor = 0;
void setup() {
  servo.attach(PinservoMotor);
  Serial.begin(9600);
}
void loop() {
  valorPot = analogRead(Pinpotenciometro);
  valorMotor = map(valorPot, 0, 1023, 0, 180);
  servo.write (valorMotor);
  Serial.print(valorMotor);
  delay(20);
}

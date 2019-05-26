int pinOut = 7;
int pinA = 8;
int pinB = 9;

void setup()
{
  pinMode(pinOut, OUTPUT);
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
}
void loop()
{
  boolean pinAState = digitalRead(pinA);
  boolean pinBState = digitalRead(pinB);
  boolean pinOutState;
  /*
    //or
    pinOutState = pinAState | pinBState;

    // not
    pinOutState = !pinAState;

    // XOR
    pinOutState = pinAState ^ pinBState;

    //NAND
    pinOutState = !(pinAState & pinBState);

    //NOR
    pinOutState = !(pinAState | pinBState);
  */
  // and
  pinOutState = pinAState & pinBState;
  digitalWrite(pinOut, pinOutState);
}

// constants for notes - C4 is middle C.
const int n_C3 = 131;
const int n_CS3 = 139;
const int n_D3 = 147;
const int n_DS3 = 156;
const int n_E3 = 165;
const int n_F3 = 175;
const int n_FS3 = 185;
const int n_G3 = 196;
const int n_GS3 = 208;
const int n_A3 = 220;
const int n_AS3 = 233;
const int n_B3 = 247;
const int n_C4 = 262;
const int n_CS4 = 277;
const int n_D4 = 294;
const int n_DS4 = 311;
const int n_E4 = 330;
const int n_F4 = 349;
const int n_FS4 = 370;
const int n_G4 = 392;
const int n_GS4 = 415;
const int n_A4 = 440;
const int n_AS4 = 466;
const int n_B4 = 494;
const int n_C5 = 523;
const int n_CS5 = 554;
const int n_D5 = 587;
const int n_DS5 = 622;
const int n_E5 = 659;
const int n_F5 = 698;
const int n_FS5 = 740;
const int n_G5 = 784;
const int n_GS5 = 831;
const int n_A5 = 880;
const int n_AS5 = 932;
const int n_B5 = 988;
const int n_C6 = 1047;
const int n_CS6 = 1109;
const int n_D6 = 1175;
const int n_DS6 = 1245;
const int n_E6 = 1319;
const int n_F6 = 1397;
const int n_FS6 = 1480;
const int n_G6 = 1568;
const int n_GS6 = 1661;
const int n_A6 = 1760;
const int n_AS6 = 1865;
const int n_B6 = 1976;

const int rest = 0;
const int buzzerPin = 9;
int tempo = 150;



int tune[] = {n_C4, n_C4, n_G4, n_G4, n_A4, n_A4, n_G4, n_F4, n_F4, n_E4, n_E4, n_D4, n_D4, n_C4};
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2 };
int tunelength = 14;

void setup()
{
  pinMode(buzzerPin, OUTPUT);

}

void loop()
{
  for (int i = 0; i < tunelength; i++)
  {
    if (tune[i] == rest)
    {
      delay(beats[i]*tempo);
    }
    else
    {
      tone(buzzerPin, tune[i], beats[i]*tempo);
      delay(beats[i]*tempo);
    }
    delay(tempo / 10);
  }
  while (true) {}
}
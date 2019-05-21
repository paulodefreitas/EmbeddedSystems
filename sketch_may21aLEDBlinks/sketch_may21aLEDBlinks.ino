// EXP 01: PISCA_LED COM TEMPORIZAÇÃO
void setup()
{
  pinMode(12, OUTPUT); //define pino 12 como saída digital
}
void loop()
{
  //deixa pino 12 em nível alto (+5V) durante 1000ms (=1s)
  digitalWrite(12, 1);
  delay(1000);
  //deixa pino 12 em nível baixo (0V) durante 1000ms (=1s)
  digitalWrite(12, 0);
  delay(1000);
}

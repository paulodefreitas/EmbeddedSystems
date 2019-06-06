#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define AnalogLDR A0 // define pino analógico A0
#define Limiar 1.5 // define constante igual a 1.5
#define ledPin 13 // define pino digital D13

int Leitura = 0; // variavel inteiro igual a zero
float VoltageLDR; // variavel numero fracionario
float ResLDR; // variavel numero fracionario

void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  pinMode(ledPin, OUTPUT); // configura D13 como saída digital
  Serial.begin(9600); // monitor serial - velocidade 9600 Bps
  delay(100); // atraso de 100 milisegundos
}

void loop()
{
  //Limpa a tela
  lcd.clear();
  lcd.setCursor(0, 0); // Sets the location at which subsequent text written to the LCD will be displayed
  Leitura = analogRead(AnalogLDR); // leitura da tensão no pino analogico A0
  VoltageLDR = Leitura * (5.0 / 1024); // calculo da tensão no LDR
  lcd.print("LDR = "); // imprime no monitor serial
  lcd.print(VoltageLDR); // imprime a tensão do LDR

  if (VoltageLDR > Limiar) // se a tensão LDR maior do que limiar
    digitalWrite(ledPin, HIGH); // liga LED com 5V
  else // senão a tensão LDR < limiar
    digitalWrite(ledPin, LOW); // desliga LED com 0V
  delay(500);
}

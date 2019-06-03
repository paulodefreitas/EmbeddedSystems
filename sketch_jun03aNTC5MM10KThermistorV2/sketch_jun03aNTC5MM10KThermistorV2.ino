#include <LiquidCrystal.h>
#include <math.h>

const int TERMISTOR = A1;

double obterTemperatura(int termistor) {
  double tempK, tempC;
  tempK = log(10000.0 * (1024.0 / termistor - 1));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK)) *
               tempK);
  tempC = tempK - 273.15;
  return tempC;
}


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {

  int termistor = analogRead(TERMISTOR);
  float temperature = obterTemperatura(termistor); //calcula a temperatura

  //Imprimindo no monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("°C");

  //imprimindo no LCD
  lcd.setCursor(0, 0); // Define o cursor na posição de início
  lcd.print("Temp. = ");
  lcd.print(temperature);
  lcd.write(B11011111); // Imprime o símbolo de grau
  lcd.print("C");

  delay(1000);
}

#include <math.h>
const int TERMISTOR = A0;
double obterTemperatura(int termistor) {
  double tempK, tempC;
  tempK = log(10000.0 * (1024.0 / termistor - 1));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK)) *
               tempK);
  tempC = tempK - 273.15;
  return tempC;
}
void setup() {
  Serial.begin(9600);
}
void loop() {
  int termistor = analogRead(TERMISTOR);
  Serial.print(obterTemperatura(termistor));
  Serial.print(char(176));
  Serial.println("C");
  delay(1000);
}

const int TECLADO = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long valor = 0;

  for (int i = 0; i < 20; i++) {
    valor += analogRead(TECLADO);
  }
  valor /= 20;

  if (valor > 0) {
    Serial.print("Teclado = ");
    Serial.print(valor);
    if (valor > 1020)
      Serial.println(", Tecla 1");
    else if (valor > 505 && valor < 515)
      Serial.println(", Tecla 2");
    else if (valor > 335 && valor < 345)
      Serial.println(", Tecla 3");
    else
      Serial.println("");
  }
  delay(200);
}

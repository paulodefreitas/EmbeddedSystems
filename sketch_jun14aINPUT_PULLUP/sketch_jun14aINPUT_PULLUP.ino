int LED = 13;
int BOTAO = 8;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP); //Ativando os resistores internos
  Serial.begin(9600);
}
void loop() {
  int estado = digitalRead(BOTAO); // Realiza a leitura do estado do botão
  Serial.print("Valor da variavel estado: ");
  Serial.print(estado);
  if (estado == LOW) {
    digitalWrite(LED, HIGH);
    Serial.println(" - Led Ligado");
  }
  else {
    digitalWrite(LED, LOW);
    Serial.println(" - Led Desligado");
  }
  delay(100);
}

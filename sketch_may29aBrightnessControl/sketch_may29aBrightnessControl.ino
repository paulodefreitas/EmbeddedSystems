//Controls the brightness of an LED at the frequency induced by the potentiometer.
int pot = 1;
int led = 9;
int valor = 0;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  valor = analogRead(pot);
  Serial.println(valor);
  if (valor > 0) {
    analogWrite(led, (valor / 4));
  }
}

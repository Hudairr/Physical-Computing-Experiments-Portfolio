int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);       //TURN ON LED1
  delay(200);                     //WAIT FOR 200MS
  digitalWrite(LED2, HIGH);       //TURN ON LED2
  delay(200);                     //WAIT FOR 200MS
  digitalWrite(LED3, HIGH);       //TURN ON LED3
  delay(200);                     //WAIT FOR 200MS
  digitalWrite(LED1, LOW);       //TURN ON LED1
  delay(300);                     //WAIT FOR 300MS
  digitalWrite(LED2, LOW);       //TURN ON LED2
  delay(300);                     //WAIT FOR 300MS
  digitalWrite(LED3, LOW);       //TURN ON LED3
  delay(300);                     //WAIT FOR 300MS
}
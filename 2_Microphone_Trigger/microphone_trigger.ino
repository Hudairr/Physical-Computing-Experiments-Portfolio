int ledPin =13;
int micPin = 1;
int state=0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(micPin, INPUT);
}

void loop() {
  state=digitalRead(micPin);
  if (state == HIGH){
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}

int sensorPin=2;
int ledPin=12;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  int read=digitalRead(sensorPin);
  if(read==LOW){
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}

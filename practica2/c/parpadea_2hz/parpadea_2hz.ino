int led = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(500); // El tiempo de delay será: 1/2Hz * 1000ms = 500 ms
  digitalWrite(led,LOW);
  delay(500);
}

int fotodiodo = A0;
int cuenta = 0;
int anterior = 0;
int actual = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(fotodiodo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  actual = analogRead(fotodiodo);
  if(anterior != 0 && anterior != actual)
    cuenta += 1;
  anterior = actual;
  Serial.println(cuenta);
  delay(200);
}

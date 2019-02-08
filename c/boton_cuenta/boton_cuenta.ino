int boton = 11;
int cuenta = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(boton)==LOW)
  {
    cuenta++;
    Serial.println(cuenta);
  }
  delay(500);
}

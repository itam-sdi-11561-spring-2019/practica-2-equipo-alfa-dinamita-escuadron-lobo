int rojo = 11;
int amarillo = 10;
int verde = 9;
int cuenta = 0;
int c = 0;
int v = HIGH;
int r = LOW;
int a = LOW;

void setup() {
  // put your setup code here, to run once:
  cli();
  TCCR0B = 0; TCCR0A = 0;
  TCCR0B |= (1 << CS01);
  TCCR0B |= (1 << CS00);
  TCCR0A |= (1 << WGM01);
  OCR0A = 0xFA;
  TIMSK0 |= (1 << OCIE0A);
  sei();
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(verde, v);
  digitalWrite(amarillo, a);
  digitalWrite(rojo, r);
}

ISR(TIMER0_COMPA_vect)
{
  cuenta++;
  if(cuenta%1000 == 0)
  {
    c++;
    Serial.println(c);
    if(c==25)
      c = 0;
    if(c < 12)
    {
      v = HIGH;
      a = LOW;
      r = LOW;
    }
    if(c >= 12 && c < 15)
    {
      v = HIGH;
      a = HIGH;
      r = LOW;
    }
    if(c >= 15 && c < 25)
    {
      v = LOW;
      a = LOW;
      r = HIGH;
    }
  }
}

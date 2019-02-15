int led = 11;
int current = HIGH;
int next = LOW;

void setup()
{
  cli();
  TCCR1B = 0; TCCR1A = 0;
  TCCR1B |= (1 << CS12);
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << WGM12);
  OCR1AH = 0x0F; OCR1AL = 0x42;
  TIMSK1 |= (1 << OCIE1A);
  sei();
  pinMode(led, OUTPUT);
}

void loop()
{
  
}

ISR(TIMER1_COMPA_vect)
{
  digitalWrite(led, next);
  int aux = next;
  next = current;
  current = aux;
}

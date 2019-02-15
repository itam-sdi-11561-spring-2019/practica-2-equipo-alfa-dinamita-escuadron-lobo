int led = 11;
int current = HIGH;
int next = LOW;

void setup()
{
  cli();
  TCCR1B = 0; TCCR1A = 0;
  TCCR1B |= (1 << CS12);
  TCCR1B |= (1 << CS10);
  TCNT1 = 0xE17C; // valor inicial: 27,724 = 0xE17C
  TIMSK1 |= (1 << TOIE1);
  sei();
  pinMode(led, OUTPUT);
}

void loop()
{
  
}

ISR(TIMER1_OVF_vect)
{
  digitalWrite(led, next);
  int aux = next;
  next = current;
  current = aux;
}

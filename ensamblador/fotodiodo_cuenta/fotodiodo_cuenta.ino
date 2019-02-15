int x = 0;

void setup()
{
  cli();
  DDRD &= ~(1 << DDD1);
  PORTD |= (1 << PORTD1);
  EICRA |= (1 << ISC10);
  EIMSK |= (1 << INT1);
  sei();
  Serial.begin(9600);
}

void loop()
{
  
}

ISR(INT1_vect)
{
  x++;
  Serial.println(x);
}

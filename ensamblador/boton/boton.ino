void setup() {
  // put your setup code here, to run once:
  DDRB = B10010000;
}

void loop() {
  // put your main code here, to run repeatedly:
  asm volatile(
    "cbi %0, %1 \n" \
    "sbis %2, %3 \n" \
    "sbi %0, %1 \n" \
    : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB4), "I" (_SFR_IO_ADDR(PINB)), "I" (PINB5) :
    );
    delay(500);
}

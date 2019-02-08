void setup() {
  // put your setup code here, to run once:
  DDRB =  DDRB | B10000000;
}

void loop() {
  // put your main code here, to run repeatedly:
  asm volatile(
    "cbi %0, %1 \n" \
    "sbis %2, %3 \n" \
    "sbi %0, %1 \n" \
    :  : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB7), "I" (_SFR_IO_ADDR(PINB)), "I" (PINB7)  :
    );
    delay(500);
}

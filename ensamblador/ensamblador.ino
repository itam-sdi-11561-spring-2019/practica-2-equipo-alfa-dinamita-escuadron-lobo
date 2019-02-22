void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  int var_out = 0;
  asm volatile (
      "ldi r16, 0x01 \n"
      "ldi r17, 0x02 \n"
      "ldi r18, 0x03 \n"
      "ldi r19, 0x04 \n"
      "ldi r20, 0x0  \n"
      "ldi r21, 0x04 \n"

      "add r16, r17 \n"
      "adc r16, r18 \n"
      "adc r16, r19 \n"
      "adc r16, r20 \n"

      "label: \n"
      "sbc r16, r22 \n"
      "inc r21 \n"
      "cp r16, r22 \n"
      "brpl label \n"            
      "mov %0, r21 \n\t"
      : "=r" (var_out)
  );

  Serial.println(var_out);



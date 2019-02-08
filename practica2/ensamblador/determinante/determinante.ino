void setup() {
  DDRB =  DDRB | B10000000;
}

void loop() {
  // put your main code here, to run repeatedly:
  asm volatile (
    "LDI R16, 0x0A \n\t"
    "LDI R17, 0x14 \n\t" 
    "LDI R18, 0x1E \n\t" 
    "LDI R19, 0x04 \n\t" 
    "MUL R17, R17 \n\t"  
    "MOV R17, R1 \n\t" 
    "MOV R20, R0 \n\t" 
    "MUL R16, R18 \n\t"  
    "MOV R16, R1 \n\t" 
    "MOV R18, R0 \n\t" 
    "LDI R22, 0x00 \n\t" 
    "LSL R18 \n\t"   
    "LSL R16 \n\t"   
    "ADC R16, R22 \n\t"  
    "LSL R18 \n\t"   
    "LSL R16 \n\t"   
    "ADC R16, R22 \n\t"  
    "CP  R20, R18 \n\t"  
      "sbi %0, %1 \n\t" \
      : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB7)
    );
}




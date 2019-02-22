void setup(){
    int i, sum, actual;
    int arreglo[]={1, 2, 3, 4};
    double n=4;
    sum=0;
    i=0;
    double prom=0;
    
    for(i=1;i<=n;i++) {
      actual=arreglo[i];
      sum=sum+actual;
    }
    prom=sum/n;
    Serial.print(prom, DEC);
  
}
void loop(){
  
}

  

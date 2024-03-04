int reedSwitch = 2,LED=7;

void isr1(){
  digitalWrite(LED,HIGH);  
}

void isr2(){
  digitalWrite(LED,LOW);  
}

void setup() {
  pinMode(reedSwitch,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  int s = digitalRead(reedSwitch);
  attachInterrupt(0,isr1,FALLING);
  attachInterrupt(0,isr2,RISING);
}

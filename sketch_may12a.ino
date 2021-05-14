#include <Stepper.h>

Stepper motorp(64,8,9,10,11);
int valorpot = 0;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int valorpot = map(analogRead(A0),0,1023,0,100);
  if(valorpot != 0)
  {
    motorp.setSpeed(valorpot);//coloca a velocidade de acordo com o potenciometro
    motorp.step(10);
  }
  else{motorp.step(0);}
  
}

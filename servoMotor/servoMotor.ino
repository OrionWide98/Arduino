#include<Servo.h>

Servo mm;
int distancia = 1;
int recebido;

void setup()
{
  mm.attach(2);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
    recebido = Serial.read();

    recebido -= 32;
    
    if(recebido == 'A') distancia += 15;
    if(recebido == 'B') distancia -= 15;
    
    if(distancia < 1 ) distancia = 1;
    if(distancia > 180) distancia = 180;
  }
  
  mm.write(distancia);
}

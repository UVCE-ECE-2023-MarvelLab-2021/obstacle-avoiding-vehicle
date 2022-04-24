#include "pinsUsed.h"

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  
  pinMode(rf_pin,OUTPUT);
  pinMode(rr_pin,OUTPUT);
  pinMode(lf_pin,OUTPUT);
  pinMode(lr_pin,OUTPUT);
  Serial.begin(9600);
}

#include "vehicleCommands.h"

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin,LOW);
  duration = pulseIn(echo_pin,HIGH);
  distance = (duration*0.034)/2;

  if(distance<max_distance){
    goRight();
  }
  else{
    goForward();
  }
}

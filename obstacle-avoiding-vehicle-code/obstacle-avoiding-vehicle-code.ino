#include "pinsUsed.h"

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  
  pinMode(lft_forwrd_pin,OUTPUT);
  pinMode(lft_rev_pin,OUTPUT);
  pinMode(rght_forwrd_pin,OUTPUT);
  pinMode(right_reverse_pin,OUTPUT);
  Serial.begin(9600);
}

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
void goForward(){
  botSpeed = 75;
  Serial.println("Forward...at "+String(botSpeed));
  analogWrite(lft_forwrd_pin,botSpeed);
  analogWrite(lft_rev_pin,0);
  analogWrite(rght_forwrd_pin,botSpeed);
  analogWrite(right_reverse_pin,0);
}
void goRight(){
  botSpeed = 200;
  Serial.println("Right...at "+String(botSpeed));
  analogWrite(lft_forwrd_pin,0);
  analogWrite(lft_rev_pin,botSpeed);
  analogWrite(rght_forwrd_pin,botSpeed);
  analogWrite(rght_rev_pin,0);
}

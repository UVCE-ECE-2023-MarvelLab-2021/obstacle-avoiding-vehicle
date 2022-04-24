#pragma once

// Ultrasonic sensor pins
int trig_pin = 2;
int echo_pin = 4;
int max_distance = 30;

// Bot wheel direction control pins
int rf_pin = 5; // right wheels forward pwm pin
int rr_pin = 6; //right wheels reverse pwm pin
int lf_pin = 9; // left wheels forward pwm pin
int lr_pin = 10;  // left wheels reverse pwm pin

int botSpeed = 0; // speed of wheels

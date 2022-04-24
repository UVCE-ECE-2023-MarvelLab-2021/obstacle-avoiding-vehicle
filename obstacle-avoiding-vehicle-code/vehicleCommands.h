#pragma once

// control signals given to motor driver to execute various commands
void goForward(){
  botSpeed = 40;
  analogWrite(rf_pin,botSpeed);
  analogWrite(rr_pin,0);
  analogWrite(lf_pin,botSpeed);
  analogWrite(lr_pin,0);
}
void goRight(){
  botSpeed = 50;
  analogWrite(rf_pin,0);
  analogWrite(rr_pin,botSpeed);
  analogWrite(lf_pin,botSpeed);
  analogWrite(lr_pin,0);
} 

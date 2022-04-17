# Ultrasonic Sensor:
trig pin: used to provide trigger which when triggered for 10 $\mu s$ gives out 8 cycle sonic pulses travelling at speed of sound
</br>
echo pin: receives the reflected pulses and return the duration of wave journey to and from the obstacle. Thus the time should be halved to obtained the time taken to travel to the obstacle.
</br>
Speed of sound in air is 340 m/s or 0.034 cm/$\mu s$ thus the distance between obstacle and sensor is found as <span style="background-color: #888888;color:white;border-radius:2px;padding:2px;">  duration*0.034/2  </span> where duration is obtained in $\mu s$

## Working using arduino :
-> Trig pin is set HIGH </br>
-> Delay is set for 10 $\mu s$</br>
-> Read the echo pin using pulseIn()
<details>
<summary>pulseIn():</summary>
Measures the duration of a given state(HIGH/LOW) that a given pin is in
</br>
Syntax:pulseIn(pin, value)
</br>
pin -> which pin</br>
value -> required state
</br>
Returns: the length of pulse in $\mu s$
</details>
->Calculate the distance





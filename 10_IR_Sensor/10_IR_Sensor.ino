//servo motor
#include <Servo.h>
Servo tap_servo;
int sensor_pin = 4;
int tap_servo_pin = 5;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_pin, INPUT);
  tap_servo.attach(tap_servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sensor_pin);
  if(val == 0){
    tap_servo.write(0);
  }
  if(val == 1){
    tap_servo.write(180);
  }
}
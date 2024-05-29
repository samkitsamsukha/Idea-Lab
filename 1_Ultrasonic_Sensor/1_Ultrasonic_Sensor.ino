int trigpin = 8;
int echopin = 9;
int ledpin = 2;
int distance_threshold = 40;
float duration_us, distance_cm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration_us = pulseIn(echopin, HIGH);
  distance_cm = 0.017 * duration_us;
  if(distance_cm < distance_threshold){
    digitalWrite(ledpin, HIGH);
  }
  else{
    digitalWrite(ledpin, LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  delay(500);
}

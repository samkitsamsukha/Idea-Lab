int buzzer = 13;
int flamepin = 2;
int Flame = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(flamepin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Flame = digitalRead(flamepin);
  if(Flame == HIGH){
    Serial.println("High Flame");
    digitalWrite(buzzer, HIGH);
  }
  else{
    Serial.println("Low Flame");
    digitalWrite(buzzer, LOW);
  }
}

//smoke sensor
int redled= 12;
int  greenled = 11;
int buzzer = 10;
int smokeA0 = A5;
int sensorThres = 150;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogSensor = analogRead(smokeA0);
  Serial.println("Pin A0: ");
  Serial.println(analogSensor);
  if(analogSensor>sensorThres){
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, HIGH);
    tone(buzzer,1000, 200);

  }
  else{
    digitalWrite(redled, LOW);
    digitalWrite(greenled, HIGH);
    noTone(buzzer);

  }
  delay(1000);
}
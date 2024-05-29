int floatsensor = 2;
int led = 13;
int buttonState = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(floatsensor, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(floatsensor);
  if(buttonState == HIGH){
    digitalWrite(led, LOW);
    Serial.println("Waterlevel - HIGH");
  }
  else{
    digitalWrite(led, HIGH);
    Serial.println("Waterlevel - LOW");
  }
  delay(1000);
}

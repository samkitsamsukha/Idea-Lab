//LDR
const int ledPin = 2;
const int ldrPin = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrstatus = analogRead(ldrPin);
  if(ldrstatus<= 200){
    digitalWrite(ledPin, LOW);
    Serial.println("Its bright, turn off the LED: ");
    Serial.println(ldrstatus);

  }
  else{
    digitalWrite(ledPin, HIGH);
    Serial.println("Its dark, turn on the LED: ");
    Serial.println(ldrstatus);
  }
}
//Touch sensor exp
 const  int TOUCH_SENSOR_PIN = 2;
 const int LED_PIN = 3;

 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TOUCH_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchState = digitalRead(TOUCH_SENSOR_PIN);
  if(touchState == HIGH){
    Serial.println("The Sensor being touched");
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
  }
  else{
    Serial.println("The sensor in untouched");
    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }
}
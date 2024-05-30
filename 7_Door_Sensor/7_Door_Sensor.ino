//door sensor 
const int door_sensor_pin = 13;
const int led_pin = 3;
int doorstate;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(door_sensor_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  doorstate= digitalRead(door_sensor_pin);
  if(doorstate == HIGH){
    Serial.println("The door is open");
    digitalWrite(led_pin, HIGH);
    delay(1000);
  }
  else{
    Serial.println("The door is closed");
    digitalWrite(led_pin, LOW);
    delay(1000);
  }
}
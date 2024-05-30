int sensorpin = A0;
int output_value;

void setup(){
    Serial.begin(9600);
    Serial.println("Reading from the sensor...");
    delay(2000);
}

void loop(){
    output_value = analogRead(sensorpin);
    output_value = map(output_value, 500, 10, 0, 100);
    Serial.print("Moisture: ");
    Serial.print(output_value);
    Serial.println("%");
    delay(1000);
}
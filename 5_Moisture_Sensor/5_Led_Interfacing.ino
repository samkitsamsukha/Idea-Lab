int ledpin = 8;
int sensorpin = 9;

void setup(){
    pinMode(ledpin, OUTPUT);
    pinMode(sensorpin, INPUT);
}

void loop(){
    if(digitalRead(sensorpin) == HIGH){
        digitalWrite(ledpin, HIGH);
    }
    else{
        digitalWrite(ledpin, LOW);
        delay(1000);
    }
}
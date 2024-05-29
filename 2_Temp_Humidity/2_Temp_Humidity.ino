#include<DHT.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define DHTPIN 2;
#define DHTTYPE DHT11;
DHT dht (DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  float humi = dht.readHumidity(0);
  float temp = dht.readTemperature();
  Serial.print("humidity: ");
  serial.print(humi);
  Serial.print("% | ");
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" degree Celcius");
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("humi: ");
  lcd.print(humi);
  lcd.print("%");
  Serial.begin(9600);
  dht.begin();
  lcd.setCursor(0, 1);
  lcd.print("temp: ");
  lcd.print(temp);
  lcd.print(".C");
  delay(500);
}

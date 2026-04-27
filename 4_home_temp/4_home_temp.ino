#include <DHT.h>

#define D1 36
#define DHTTYPE DHT22

DHT dht(D1, DHTTYPE);
void setup() {
  Serial.begin(115200);
  dht.begin();
}
void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("Humidity: ");
  Serial.println(hum);
  delay(2000);
}
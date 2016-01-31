#include <dht.h>

dht DHT;

#define DHT11_PIN 5

void setup() {
	Serial.begin(115200);
	Serial.pringln("hello dht11");
	Serial.print("dht_lib: ");
	Serial.println(DHT_LIB_VERSION);
	Serial.pringln();
	Serial.println("status\thumidity [%]\ttemp [°C]");
}

void loop() {
	Serial.print(DHT.read11(DHT11_PIN));
	Serial.print("\t");
	Serial.print(DHT.humidity, 1);
	Serial.print("\t");
	Serial.print(DHT.temperature, 1);
	delay(1000);
}

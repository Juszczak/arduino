int red = 11;
int blue = 10;
int green = 9;

int val;
int pin;

void setup() {
	pinMode(red, OUTPUT);
	pinMode(blue, OUTPUT);
	pinMode(green, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	pin = red;

	analogWrite(pin, 0);

	for(val = 0; val < 256; val++) {
		analogWrite(pin, val);
		if(val != 255) {
			delay(1);
		}
	}

	for(val = 255; val > 0; val--) {
		analogWrite(pin, val);
		if(val != 0) {
			delay(1);
		}
	}

	delay(1);
}

int t;
void setup() {
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	t++;
	digitalWrite(13, HIGH);
	Serial.println("led aan");
	delay(2000);
	digitalWrite(13, LOW);
	Serial.println("led uit");
	delay(1000);
}


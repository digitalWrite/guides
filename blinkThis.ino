#define led 13
#define delayTime 250

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{

	flashLed();
}

void flashLed()
{
	for(int i = 0; i < 20; i++)
	{
		digitalWrite(led, HIGH);
		delay(delayTime);
		digitalWrite(led, LOW);
		delay(delayTime);
	}

	delay(3000);
}

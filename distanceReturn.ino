#define ledPin 13
#define delayTime 250

void setup()
{
	pinMode(ledPin, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	float distance = 600; // in cm
	detector(distance);
	
}

void detector(float distance)
{
	float meters = conversion(distance);
	if (meters > 10)
	{
		digitalWrite(ledPin, HIGH);
		Serial.println("Too Close");
                delay(delayTime);
	}
	else
	{
		digitalWrite(ledPin, LOW);
                delay(delayTime);
	}
}

float conversion(float distance)
{

	return distance / 100;
	
}

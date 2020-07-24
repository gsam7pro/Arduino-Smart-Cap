#define trigPin 10
#define echoPin 9
#define buzzPin 2

void setup()
{
pinMode(trigPin, OUTPUT); //FOR ONE ULTRASONIC SENSOR ONLY
pinMode(echoPin, INPUT);
pinModse(buzzPin,OUTPUT);
}

void loop()
{
long duration, distance;

digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 

digitalWrite(trigPin, HIGH);
delayMicroseconds(2);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

if (distance < 40)
{ 
digitalWrite(buzzPin,HIGH);
} else
{
digitalWrite(buzzPin,LOW);
} delay(60);
}

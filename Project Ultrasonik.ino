//viral science
//Ultrasonic Distance alarm
Const int trigPin = 9;
Const int echoPin = 10;
Const int buzzer = 11;
Const int ledPin = 13;

// defines variables
Long duration;
Int distance;
Int safetyDistance;


Void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}


Void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
Duration = pulseIn(echoPin, HIGH);

// Calculating the distance
Distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 80){ //Enter the Distance 
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
Else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}

// Prints the distance on the Serial Monitor
Serial.print(“Distance: “);
Serial.println(distance);
}


// Define pins
const int alcoholSensorPin = A0; // Analog pin for MQ-3 alcohol sensor
const int buzzerPin = 9; // Digital pin for buzzer
 
int alcoholLevel = 0; // Variable to store the alcohol level
// Threshold value, adjust based on calibration
const int threshold = 300; // Adjust the threshold according to your sensor calibration

void setup() {
  // Initialize serial communication for monitoring
  Serial.begin(9600);
  // Initialize pin modes
  pinMode(alcoholSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Read alcohol level from the sensor
  alcoholLevel = analogRead(alcoholSensorPin);
  
  // Print alcohol level to serial monitor
  Serial.print("Alcohol level: ");
  Serial.println(alcoholLevel);
  
  // Check if alcohol level exceeds threshold
  if (alcoholLevel > threshold) {
    // Trigger buzzer
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Alcohol detected!");
  } else {
    // Turn off buzzer
    digitalWrite(buzzerPin, LOW);
  }
  
  // Small delay before reading again
  delay(500);
}

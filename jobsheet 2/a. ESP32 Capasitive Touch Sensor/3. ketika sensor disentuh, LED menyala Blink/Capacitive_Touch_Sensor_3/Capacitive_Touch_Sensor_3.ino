// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
const int touchPin = 4; // Assign the touch pin to GPIO 4
const int ledPin = 2;   // Assign the LED pin to GPIO 2 (you can use any suitable GPIO pin)

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  delay(100); // Give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  int touchValue = touchRead(touchPin); // Get the value of Touch 0 pin = GPIO 4
  Serial.println(touchValue);
  
  if (touchValue < 60) { // Adjust this threshold as needed
    digitalWrite(ledPin, HIGH); // Turn on the LED when touch is detected
    delay(100);
    digitalWrite(ledPin, LOW); // Turn on the LED when touch is detected
    delay(100);
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED when no touch is detected
  }
  delay(100);
}

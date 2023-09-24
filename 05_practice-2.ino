
const int ledPin = 7;
int cycleCount = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (cycleCount < 5) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(100); // 100 millisecond delay
    digitalWrite(ledPin, LOW); // Turn off the LED
    delay(100); // 100 millisecond delay
    cycleCount++; // Increment the cycle count
  }
  
  digitalWrite(ledPin, HIGH); // Turn off the LED after five cycles
}

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);     // Configure LED pin
  Serial.begin(9600);           // UART: 9600 baud, 8N1 (default)
}

void loop() {
  if (Serial.available() > 0) {   // Check if character received
    char received = Serial.read(); // Read the character

    // Blink LED once
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  }
}
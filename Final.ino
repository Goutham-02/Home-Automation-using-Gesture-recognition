int ledPin = 4;   // Pin connected to LED (Bulb)
int buzzerPin = 14; // Pin connected to Buzzer

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(13, OUTPUT); //Relay

  // Initially turn off both LED and Buzzer
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

    // Check the received serial input
    if (input == '2') {
      // Turn on the LED
      digitalWrite(ledPin, HIGH);
      digitalWrite(13, HIGH);
 // Turn off the Buzzer
    } 
    if (input == '3') {
      // Turn on the Buzzer
      digitalWrite(buzzerPin, HIGH);
  // Turn off the LED
    } 
    if (input == '1') {
      // Turn off both LED and Buzzer
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, LOW);
      digitalWrite(13, LOW);
    }
  }
}

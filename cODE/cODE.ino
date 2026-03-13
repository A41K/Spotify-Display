const int buttonPin = 2;   // GPIO pin where the button is connected

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP); // enable internal pull-up
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {  // pressed
    Serial.println("Button pressed");
  } else {
    Serial.println("Button released");
  }

  delay(200);
}
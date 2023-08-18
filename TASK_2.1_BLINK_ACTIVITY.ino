int ledPin = 13;  // Built-in LED pin
int buttonPin = 2; // Push button pin

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void dot()
{
  digitalWrite(ledPin, HIGH);
  delay(400);
  digitalWrite(ledPin, LOW);
  delay(200);
}

void dash()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(350);
}

void V()
{
    // "...-",  // V
  dot();
  dot();
  dot();
  dash();
}

void R()
{
//   ".-.",   // R
  dot();
  dash();
  dot(); 
}

void I()
{
//  "..",    // I
  dot();
  dot();
}

void T()
{
//    "-",     // T
  dash();
}


void loop() {
    if(digitalRead(buttonPin) == LOW)
  { // Button is pressed
    delay(1000);
    V();
    R();
    I();
    T();
    I();
  }
  if(digitalRead(buttonPin) == HIGH)
  {
    delay(1000);
  }
}


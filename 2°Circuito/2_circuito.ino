// C++ code


void setup()
{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (digitalRead(3) < 0) {
    digitalWrite(2, LOW);
  } else {
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
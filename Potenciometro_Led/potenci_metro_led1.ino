// C++ code

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) <= 100) {
    // Verde
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else {
    if (analogRead(A0) > 100) {
      // Amarelo e Verde
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
    }
    if (analogRead(A0) > 200) {
      // Amarelo e Vermelho
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  // cuidado com o volume!!!
  tone(5, 294, 3000); // play tone 50 (D4 = 294 Hz)
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(2, LOW);
}
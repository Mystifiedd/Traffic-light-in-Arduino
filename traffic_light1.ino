// C++ code

int Red = 13;
int Yellow = 12;
int Green = 11;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop()
{
  digitalWrite(Red, HIGH);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);
  delay(3000); // Wait for 3 seconds
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, HIGH);
  digitalWrite(Green, LOW);
  delay(3000); // Wait for 3 seconds
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, HIGH);
  delay(3000); // Wait for 3 seconds
}
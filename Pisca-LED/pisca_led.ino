// Pisca LED

int ledRed = 13;
int ledGreen = 11;
int ledYellow = 8;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop()
{
  digitalWrite(ledRed, HIGH);
  delay(600); 
  digitalWrite(ledRed, LOW);
  delay(600); 
  digitalWrite(ledGreen, HIGH);
  delay(600); 
  digitalWrite(ledGreen, LOW);
  delay(600); 
  digitalWrite(ledYellow, HIGH);
  delay(600); 
  digitalWrite(ledYellow, LOW);
  delay(600); 
}
// Leitura Analógica

void setup()
{
  Serial.begin(9600);
  pinMode(A5, INPUT);
}

void loop()
{
  int leitura = analogRead(A5);
  
  Serial.print("Valor da leitura: ");
  Serial.println(leitura);
  delay(500);
}
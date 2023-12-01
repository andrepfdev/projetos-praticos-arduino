// Leitura Analógica Desafio


void setup()
{
  pinMode(A5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int leitura = analogRead(A5);
  
  if(leitura <= 510){
  	digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else if (leitura > 510) {
  	digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
}






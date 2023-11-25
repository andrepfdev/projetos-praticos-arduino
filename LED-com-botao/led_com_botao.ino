// LED com Botão

int ledRed = 13;
int button = 4;

void setup()
{
  //Serial.begin(9600);
  
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int valueButton = digitalRead(button);
  
  if(valueButton == HIGH){
  	digitalWrite(ledRed, HIGH);
  } else {
  	digitalWrite(ledRed, LOW);
  }
  
  //Serial.println(valueButton);
  
}
// LED com Botão Inteligente 2

int ledRed = 13;
int button = 4;
bool ledOn = false; 

void setup()
{  
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int valueButton = digitalRead(button);
  
  
  if(valueButton == HIGH){ 
    delay(50); 
    if(ledOn == false){
        digitalWrite(ledRed, HIGH);
        ledOn = true;
    } else {
    	digitalWrite(ledRed, LOW);
      	ledOn = false;
    }
  } 
  
}
// segue a mesma lógica da resolução anterior, porém, usando if e else (ou else if)









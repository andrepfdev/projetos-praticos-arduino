// LED com Botão Inteligente
// Não gosto de muitos comentários no código

int ledRed = 13;
int button = 4;
int ledOn = 0; // Variável controladora

void setup()
{  
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int valueButton = digitalRead(button);
  
  if(valueButton == HIGH){ 
    // Se o botão for pressionado a estrutura switch é chamada
    delay(50); // Ajuda para não ter problema com o duplo clique
    switch(ledOn){ // Lê o valor de ledOn
    	case 0: // No caso de ledOn for 0
      	digitalWrite(ledRed, HIGH);
      	ledOn = 1; // Muda o valor da variável para 1
      	break;
      	case 1: // No caso de ledOn for 1
      	digitalWrite(ledRed, LOW);
      	ledOn = 0; // Muda o valor da variável para 0
      	break; // Para o a case
    }
  } 
  
}










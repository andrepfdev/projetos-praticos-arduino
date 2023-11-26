// LED com Botão Inteligente
// Não gosto de muitos comentários no código

int ledRed = 13;
int button = 4;
int ledOn = 0; // variável controladora

void setup()
{  
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int valueButton = digitalRead(button);
  
  // se o botão for pressionado a estrutura switch é chamada
  if(valueButton == HIGH){ 
  // o delay ajuda para não ter problema com o duplo clique
    delay(50); 
  // switch lê o valor da ledOn
    switch(ledOn){ 
    	case 0: // no caso de ledOn for 0
      	digitalWrite(ledRed, HIGH);
      	ledOn = 1; // muda o valor da variável para 1
      	break;
      	case 1: // no caso de ledOn for 1
      	digitalWrite(ledRed, LOW);
      	ledOn = 0; // muda o valor da variável para 0
      	break; // pára a case 1
    }
  } 
  
}










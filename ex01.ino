// C++ code
//

// a função setup é executada apenas uma vez na inicialização do Arduino
void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  // LED_BUILTIN é uma constante que contém o número do pino do LED embutido na placa Arduino UNO (13)
  pinMode(8, OUTPUT); // Define o pino 8 como saída digital (LED) 
}

// a função loop é executada continuamente em loop infinito após a função setup 
// ser executada na inicialização do Arduino 
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Acende o LED embutido na placa Arduino UNO, deixa a saída digital 13 em nível alto (5V)
  digitalWrite(8, LOW); // deixa a saída digital 8 em nível baixo (0V) 
  delay(1000); // aguarda 1000 milissegundos (1 segundo) 
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(8, HIGH);
  delay(1000); // aguarda 1000 milissegundos (1 segundo)
}
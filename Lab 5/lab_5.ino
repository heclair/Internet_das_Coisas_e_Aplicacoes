// Definições dos pinos
int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;
int pushButton = 2;  // Pino onde o pushbutton está conectado

void setup()
{
  // Configuração dos pinos dos LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  // Configuração do pino do pushbutton como entrada
  pinMode(pushButton, INPUT);
}

void loop()
{
  // Verifica o estado do pushbutton
  if (digitalRead(pushButton) == HIGH) {
    // Se o botão estiver pressionado, define os tempos modificados
    int tempoVerde = 7000;   // 7 segundos
    int tempoAmarelo = 3000; // 3 segundos
    int tempoVermelho = 15000; // 15 segundos

    // Acende o LED verde
    digitalWrite(ledVerde, HIGH);
    delay(tempoVerde);
    digitalWrite(ledVerde, LOW);
    
    // Acende o LED amarelo
    digitalWrite(ledAmarelo, HIGH);
    delay(tempoAmarelo);
    digitalWrite(ledAmarelo, LOW);
    
    // Acende o LED vermelho
    digitalWrite(ledVermelho, HIGH);
    delay(tempoVermelho);
    digitalWrite(ledVermelho, LOW);

    // Espera enquanto o botão ainda estiver pressionado
    while (digitalRead(pushButton) == HIGH) {
      delay(50);  // Pequeno atraso para evitar uso excessivo da CPU
    }
  } else {
    // Se o botão não estiver pressionado, define os tempos padrão
    int tempoVerde = 10000;  // 10 segundos
    int tempoAmarelo = 5000; // 5 segundos
    int tempoVermelho = 10000; // 10 segundos

    // Acende o LED verde
    digitalWrite(ledVerde, HIGH);
    delay(tempoVerde);
    digitalWrite(ledVerde, LOW);
    
    // Acende o LED amarelo
    digitalWrite(ledAmarelo, HIGH);
    delay(tempoAmarelo);
    digitalWrite(ledAmarelo, LOW);
    
    // Acende o LED vermelho
    digitalWrite(ledVermelho, HIGH);
    delay(tempoVermelho);
    digitalWrite(ledVermelho, LOW);
  }
}




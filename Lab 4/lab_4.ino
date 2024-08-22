// Definições dos pinos
int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup()
{
  // Configuração dos pinos dos LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  // Acende o LED verde por 5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(5000); // 5 segundos
  digitalWrite(ledVerde, LOW);
  
  // Acende o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000); // 2 segundos
  digitalWrite(ledAmarelo, LOW);
  
  // Acende o LED vermelho por 10 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(10000); // 10 segundos
  digitalWrite(ledVermelho, LOW);
}

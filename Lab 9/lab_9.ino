// Definições dos pinos
const int sensorPin = 7;  // Pino onde o sinal do sensor de movimento está conectado
const int ledPin = 3;    // Pino onde o LED está conectado

void setup() {
  Serial.begin(9600);     // Inicializa a comunicação serial a 9600 bps
  pinMode(sensorPin, INPUT);  // Configura o pino do sensor como entrada
  pinMode(ledPin, OUTPUT);    // Configura o pino do LED como saída
  
  digitalWrite(ledPin, LOW);  // Inicialmente desliga o LED
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Lê o valor do sensor
  
  if (sensorValue == HIGH) {
    // Se o sensor detectar movimento, acende o LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Movimento detectado!"); // Envia mensagem para o Monitor Serial
  } else {
    // Se o sensor não detectar movimento, desliga o LED
    digitalWrite(ledPin, LOW);
  }
  
  // Aguarda um curto intervalo antes de ler o sensor novamente
  delay(100);
}

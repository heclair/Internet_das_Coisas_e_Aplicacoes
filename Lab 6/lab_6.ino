int ledVermelho = 13;
int pot=A5;

void setup (){
	pinMode(ledVermelho, OUTPUT);
  	pinMode(pot, INPUT);
}

void loop(){
  int valorPot= analogRead(pot);
  int  brilho = map(valorPot,0,1023,0,255);
  
  analogWrite(ledVermelho, brilho);
  
  delay(10);
  
}
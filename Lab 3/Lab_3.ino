// C++ code
//
int led=11;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
}
// C++ code
//
int ledVermelho = 12;
int ledAmarelo = 11;
int ledVerde = 10;
int sensor = A0;

float temperatura;
float tensao;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  int leitura = analogRead(sensor);
    
  tensao = leitura * 5.0 / 1024.0;
  temperatura = (tensao - 0.5) * 100;
  
  if (temperatura < 20) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }else if (temperatura < 30) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  }else {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
  delay(500);
}

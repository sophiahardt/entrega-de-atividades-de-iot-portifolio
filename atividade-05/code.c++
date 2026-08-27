// C++ code
//
int ledVermelho = 10;
int ledVerde = 2;
int botaoPin = 7;

int estadoLed = 0;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(botaoPin, INPUT);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
}

void loop()
{
  if (digitalRead(botaoPin)== HIGH){
    estadoLed++;

    if (estadoLed > 2) {
      estadoLed = 0;
    }

    if (estadoLed == 1) {
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledVerde, LOW);
    }

    else if (estadoLed == 2) {
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, HIGH);
    }

    else {
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, LOW);
    }

    delay(500);
  }
}

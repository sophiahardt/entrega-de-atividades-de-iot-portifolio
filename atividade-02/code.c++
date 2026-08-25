// C++ code
//
#include <Servo.h> // Inclui a biblioteca do servo motor

Servo servoMotor; // Cria um objeto servo

int potenciometro = A0; // Define o pino analógico do potenciômetro
int valorLido; // Variável para armazenar o valor lido no potenciômetro
int angulo; // Variável para armazenar o ângulo do microservo

void setup() {
  	servoMotor .attach(9); // Conecta o servo ao pino digital 9
}

void loop() {
  valorLido = analogRead (potenciometro); // Lê o valor do potenciómetro
  angulo = map(valorLido, 0, 1023, 0, 180); // Converte o valor para um ângulo (0-180 graus)
  servoMotor.write(angulo); // Move o servo para o ângulo calculado

  delay(15); // Pequeno atraso para suavizar o movimento
}

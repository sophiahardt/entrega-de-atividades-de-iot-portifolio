# Prática: Controle de dois LEDs

**Discente:** Sophia Lara Hardt

**Docente:** Amanda Paul Dull

Este repositório apresenta a entrega da atividade prática de IoT **“Controle de dois LEDs”**, desenvolvida utilizando Arduino e simulada no Tinkercad.

[![Simular no Tinkercad](https://img.shields.io/badge/Simular%20no-Tinkercad-orange?style=for-the-badge&logo=autodesk)](https://www.tinkercad.com/things/k7MsQKzwmBQ-controle-de-dois-leds)

## Enunciado: Controle de dois LEDs

O projeto utiliza um **botão como entrada** para controlar **dois LEDs como saídas**. A cada acionamento do botão, o Arduino altera o estado dos LEDs, seguindo uma sequência definida e reiniciando o ciclo após o quarto acionamento.

A sequência de funcionamento é:

- **1º aperto:** acende o LED 1.
- **2º aperto:** apaga o LED 1 e acende o LED 2.
- **3º aperto:** apaga o LED 2.
- **4º aperto:** acende novamente o LED 1, reiniciando o ciclo.

Dessa forma, o projeto utiliza a lógica de programação para controlar diferentes estados das saídas a partir dos acionamentos do botão.

## Materiais necessários

| Qtd | Componente |
|-----|------------|
| 1 | Placa Arduino UNO |
| 1 | Cabo USB |
| 1 | Protoboard |
| 2 | LEDs |
| 2 | Resistores de 200 Ω ou 220 Ω |
| 1 | Botão tipo push button |
| 1 | Resistor de 10 kΩ |
| — | Fios de jumper macho-macho |

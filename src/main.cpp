#include <Arduino.h>

#define BTN_FRENTE      32
#define BTN_TRAS        35
#define BTN_DIREITA     34
#define BTN_ESQUERDA    39
#define BTN_MODO        36  // GRAVAÇÃO OU EXECUÇÃO

// Testes Iniciais
#define LED_FRENTE      15
#define LED_TRAS        2
#define LED_DIREITA     0
#define LED_ESQUERDA    4
#define LED_MODO        16 // GRAVAÇÃO OU EXECUÇÃO

#define BUFFER_SIZE     5

int buttonState = 0;
int previousButtonState = 0;

bool recordingMode = false;
int instructionBuffer[BUFFER_SIZE];
int bufferIndex = 0;

void setup() 
{
    Serial.begin(115200);
    pinMode(BTN_FRENTE, INPUT);
    pinMode(BTN_TRAS, INPUT);
    pinMode(BTN_DIREITA, INPUT);
    pinMode(BTN_ESQUERDA, INPUT);
    pinMode(BTN_MODO, INPUT);

    pinMode(LED_FRENTE, OUTPUT);
    pinMode(LED_TRAS, OUTPUT);
    pinMode(LED_DIREITA, OUTPUT);
    pinMode(LED_ESQUERDA, OUTPUT);
    pinMode(LED_MODO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}
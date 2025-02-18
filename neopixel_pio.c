#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"

// Biblioteca gerada pelo arquivo .pio durante compilação.
#include "ws2818b.pio.h"

// Biblioteca que gera um array de elementos RGB contendo todos os sprites a serem configurados na matriz de led
#include "const_piskel.h"

// Definição do número de LEDs e pino.
#define LED_COUNT 25
#define LED_PIN 7

// Definição de pixel GRB
struct pixel_t
{
    uint8_t G, R, B; // Três valores de 8-bits compõem um pixel.
};
typedef struct pixel_t pixel_t;
typedef pixel_t npLED_t; // Mudança de nome de "struct pixel_t" para "npLED_t" por clareza.

// Declaração do buffer de pixels que formam a matriz.
npLED_t leds[LED_COUNT];

// Variáveis para uso da máquina PIO.
PIO np_pio;
uint sm;

/**
 * Inicializa a máquina PIO para controle da matriz de LEDs.
 */
void npInit(uint pin)
{

    // Cria programa PIO.
    uint offset = pio_add_program(pio0, &ws2818b_program);
    np_pio = pio0;

    // Toma posse de uma máquina PIO.
    sm = pio_claim_unused_sm(np_pio, false);
    if (sm < 0)
    {
        np_pio = pio1;
        sm = pio_claim_unused_sm(np_pio, true); // Se nenhuma máquina estiver livre, panic!
    }

    // Inicia programa na máquina PIO obtida.
    ws2818b_program_init(np_pio, sm, offset, pin, 800000.f);

    // Limpa buffer de pixels.
    for (uint i = 0; i < LED_COUNT; ++i)
    {
        leds[i].R = 0;
        leds[i].G = 0;
        leds[i].B = 0;
    }
}

/**
 * Atribui uma cor RGB a um LED.
 */
void npSetLED(const uint index, const uint8_t r, const uint8_t g, const uint8_t b)
{
    leds[index].R = r;
    leds[index].G = g;
    leds[index].B = b;
}

/**
 * Limpa o buffer de pixels.
 */
void npClear()
{
    for (uint i = 0; i < LED_COUNT; ++i)
        npSetLED(i, 0, 0, 0);
}

/**
 * Escreve os dados do buffer nos LEDs.
 */
void npWrite()
{
    // Escreve cada dado de 8-bits dos pixels em sequência no buffer da máquina PIO.
    for (uint i = 0; i < LED_COUNT; ++i)
    {
        // Aplica o brilho de 30% aos valores de cor antes de enviá-los.
        // 0.77
        // 0.55 muito forte
        // 0.33 forte
        // 0.22 bonm  
        // 0.66
        // 0.44
        // 0.88
        uint8_t r = leds[i].R * 0.66;
        uint8_t g = leds[i].G * 0.66;
        uint8_t b = leds[i].B * 0.66;

        // Envia os valores ajustados ao PIO
        pio_sm_put_blocking(np_pio, sm, g);
        pio_sm_put_blocking(np_pio, sm, r);
        pio_sm_put_blocking(np_pio, sm, b);
    }
    sleep_us(100); // Espera 100us, sinal de RESET do datasheet.
}


// Modificado do github: https://github.com/BitDogLab/BitDogLab-C/tree/main/neopixel_pio
// Função para converter a posição do matriz para uma posição do vetor.
int getIndex(int x, int y)
{
    // Se a linha for par (0, 2, 4), percorremos da esquerda para a direita.
    // Se a linha for ímpar (1, 3), percorremos da direita para a esquerda.
    if (y % 2 == 0)
    {
        return 24 - (y * 5 + x); // Linha par (esquerda para direita).
    }
    else
    {
        return 24 - (y * 5 + (4 - x)); // Linha ímpar (direita para esquerda).
    }
}

/**
 * Recebe a matriz de cores em RGB e converte em um vetor linear
 */
void set_sprite(int matriz[5][5][3])
{
    // Desenhando Sprite contido na matriz.c
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            int posicao = getIndex(linha, coluna);
            npSetLED(posicao, matriz[coluna][linha][0], matriz[coluna][linha][1], matriz[coluna][linha][2]);
        }
    }
}

int main()
{
    // Inicializa entradas e saídas.
    stdio_init_all();

    // Matriz que receberá todos os sprites da Matriz de LEDs
    uint32_t matriz[144][25][3];

    // Armazena os sprites na matriz
    convert_array(matriz);

    // Inicializa matriz de LEDs NeoPixel.
    npInit(LED_PIN);
    npClear();

    // Aqui, você desenha nos LEDs.

    npWrite(); // Escreve os dados nos LEDs.

    // Não faz mais nada. Loop infinito.
    while (true)
    {

        for (int i = 0; i < 12; i++) {
            // Desenhando Sprite contido na matriz.c
            set_sprite(matriz[i]);

            // Faz a gravação da matriz para os leds
            npWrite();
    
            sleep_ms(1000);
    
            // Limpa os dados gravados na matriz de led
            npClear();
        }
    }

    return 0;
}

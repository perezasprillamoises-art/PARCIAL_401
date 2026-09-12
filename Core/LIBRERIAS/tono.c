#include "tono.h"

void Sound_play(uint32_t frec, uint32_t dura)
{
    uint32_t ciclos;
    uint32_t medio_periodo;
    uint32_t inicio;

    // Medio período en ciclos de CPU
    medio_periodo = HAL_RCC_GetHCLKFreq() / (2UL * frec);

    // Cantidad de ciclos de la nota
    ciclos = ((uint64_t)frec * dura) / 1000UL;

    while (ciclos--)
    {
        // HIGH
        AUDIO_GPIO_Port->BSRR = AUDIO_Pin;


        inicio = DWT->CYCCNT;
        while ((DWT->CYCCNT - inicio) < medio_periodo);

        // LOW
        AUDIO_GPIO_Port->BSRR = ((uint32_t)AUDIO_Pin << 16);

        inicio = DWT->CYCCNT;
        while ((DWT->CYCCNT - inicio) < medio_periodo);
    }

    // Asegurar que termine apagado
    AUDIO_GPIO_Port->BSRR = ((uint32_t)AUDIO_Pin << 16);

   }



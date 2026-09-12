/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "delays.h"
#include "stm32f4xx_hal_gpio.h"
#include "tono.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

// ======================================================
// FUNCIÓN 1 - Ascendente
// ======================================================
// ======================================================
// FUNCIÓN 1 - Ascendente
// ======================================================
void Funcion1(void)
{
    // 1
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(330, 180);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_Delay(100);

    // 2
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(392, 180);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_Delay(100);

    // 3
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(494, 180);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_Delay(100);

    // 4
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
    Sound_play(587, 180);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
    HAL_Delay(100);
}


// ======================================================
// FUNCIÓN 2 - Descendente
// ======================================================
void Funcion2(void)
{
    // 4
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
    Sound_play(800, 200);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);

    // 3
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(700, 200);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // 2
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(600, 200);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);

    // 1
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(500, 200);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 3 - Efecto de extremos
// ======================================================
void Funcion3(void)
{
    // LED1 + LED4
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
    Sound_play(500, 250);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);

    // LED2 + LED3
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(650, 250);

    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // Todos
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);

    Sound_play(800, 300);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 4 - Alarma
// ======================================================
void Funcion4(void)
{
    // LED1 + LED3
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);

    Sound_play(1000, 250);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // LED2 + LED4
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);

    Sound_play(500, 250);

    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 5 - Ida y vuelta
// ======================================================
void Funcion5(void)
{
    // 1
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(300, 120);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);

    // 2
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(400, 120);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);

    // 3
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(500, 120);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // 4
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
    Sound_play(600, 120);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);

    // 3
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(500, 120);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // 2
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(400, 120);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);

    // 1
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(300, 120);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 6 - Parpadeo rápido
// ======================================================
void Funcion6(void)
{
    // Encender los 4
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);

    Sound_play(900, 150);

    // Apagar los 4
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);

    Sound_play(300, 150);

    // Encender nuevamente
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);

    Sound_play(900, 150);

    // Apagar
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 7 - Conteo con grupos de LEDs
// ======================================================
void Funcion7(void)
{
    // 1 LED
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(440, 200);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);

    // 2 LEDs
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(494, 200);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);

    // 3 LEDs
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(554, 200);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

    // 4 LEDs
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);

    Sound_play(622, 200);

    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
}


// ======================================================
// FUNCIÓN 8 - Encendido progresivo + final
// ======================================================
void Funcion8(void)
{
    // Mostrar 0
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_RESET);

    // LED1
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
    Sound_play(262, 100);

    // LED2
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
    Sound_play(330, 100);

    // LED3
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
    Sound_play(392, 100);

    // LED4
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
    Sound_play(494, 100);

    // Final
    Sound_play(659, 300);

    // Mostrar 8
    HAL_GPIO_WritePin(DISPLAY_A_GPIO_Port, DISPLAY_A_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_B_GPIO_Port, DISPLAY_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_C_GPIO_Port, DISPLAY_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_D_GPIO_Port, DISPLAY_D_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_E_GPIO_Port, DISPLAY_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_F_GPIO_Port, DISPLAY_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_G_GPIO_Port, DISPLAY_G_Pin, GPIO_PIN_SET);

    Sound_play(1000, 500);

    // Apagar LEDs
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
}
void Navidad(void)
{
    // Jingle Bells 🎄

    // E5 E5 E5
    Sound_play(659, 180);
    Sound_play(659, 180);
    Sound_play(659, 300);

    // E5 E5 E5
    Sound_play(659, 180);
    Sound_play(659, 180);
    Sound_play(659, 300);

    // E5 G5 C5 D5 E5
    Sound_play(659, 180);
    Sound_play(784, 180);
    Sound_play(523, 180);
    Sound_play(587, 180);
    Sound_play(659, 400);

    // F5 F5 F5 F5
    Sound_play(698, 180);
    Sound_play(698, 180);
    Sound_play(698, 180);
    Sound_play(698, 180);

    // F5 E5 E5 E5
    Sound_play(698, 180);
    Sound_play(659, 180);
    Sound_play(659, 180);
    Sound_play(659, 300);

    // E5 D5 D5 E5 D5 G5
    Sound_play(659, 180);
    Sound_play(587, 180);
    Sound_play(587, 180);
    Sound_play(659, 180);
    Sound_play(587, 180);
    Sound_play(784, 400);
}

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  Delay_Init();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    Funcion1();
    Funcion2();
    Funcion3();
    Funcion4();
    Funcion8();
    Navidad();

    //Sound_play(1000, 1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 84;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* USER CODE BEGIN MX_GPIO_Init_1 */

  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(AUDIO_GPIO_Port, AUDIO_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED2_Pin|DISPLAY_G_Pin|DISPLAY_F_Pin|DISPLAY_A_Pin
                          |DISPLAY_B_Pin|DISPLAY_E_Pin|DISPLAY_D_Pin|DISPLAY_C_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_Pin|LED3_Pin|LED4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : AUDIO_Pin */
  GPIO_InitStruct.Pin = AUDIO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(AUDIO_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LED2_Pin DISPLAY_G_Pin DISPLAY_F_Pin DISPLAY_A_Pin
                           DISPLAY_B_Pin DISPLAY_E_Pin DISPLAY_D_Pin DISPLAY_C_Pin */
  GPIO_InitStruct.Pin = LED2_Pin|DISPLAY_G_Pin|DISPLAY_F_Pin|DISPLAY_A_Pin
                          |DISPLAY_B_Pin|DISPLAY_E_Pin|DISPLAY_D_Pin|DISPLAY_C_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_Pin LED3_Pin LED4_Pin */
  GPIO_InitStruct.Pin = LED1_Pin|LED3_Pin|LED4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /* USER CODE BEGIN MX_GPIO_Init_2 */

  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

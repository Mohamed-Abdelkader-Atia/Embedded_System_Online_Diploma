/**
Name          :   main.c
Author        :   Mohamed Atia
Description   :  Toggle_led
Date          :  2024-March-02


*/
/* ********************** Includes Section Start ********************** */
#include <stdlib.h>
#include <stdint.h>
/* ********************** Includes Section End ********************** */

/* ********************** Macro Section Start ************************* */
typedef volatile unsigned int vint32_t;
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800
#define RCC_APB2ENR *((vint32_t *)(RCC_BASE + 0x18))
#define GPIOA_CRH *((vint32_t *)(GPIOA_BASE + 0x04))
#define GPIOA_ODR *((vint32_t *)(GPIOA_BASE + 0x0C))
#define RCC_IOPAEN (1 << 2)
/* ********************** Macro Section End   ************************* */

/* ********************** Sub-Program Declerations Section Start ******* */
void Delay(int delay_time);
/* ********************** Sub-Program Declerations Section End ******* */

typedef union
{
    uint32_t all_fields;
    struct
    {
        vint32_t reserved : 13;
        vint32_t p_13 : 1;
    } pin;
} R_ODR_t;

/* ********************** Global Variables Section Start ********************** */

volatile R_ODR_t *R_ODR = (volatile R_ODR_t *)(GPIOA_BASE + 0x0c);
/* ********************** Global Variables  Section End   ********************** */



/* ********************** Main-Program  Section Start ***********************/
int main()
{
    RCC_APB2ENR |= RCC_IOPAEN;
    GPIOA_CRH &= 0xff0fffff;
    GPIOA_CRH |= 0x00200000;

    while (1)
    {
        R_ODR->pin.p_13 = 1;
        Delay(10000);
        R_ODR->pin.p_13 = 0;
        Delay(10000);
    }
}
/* ********************** Main-Program  Section End ******* */



/* ********************** Sub-Program Section Start ************* */
void Delay(int delay_time)
{
    volatile int i = 0;
    for (i = 0; i < delay_time; i++)
    {
    }
}
/* ********************** Sub-Program Section End ************* */

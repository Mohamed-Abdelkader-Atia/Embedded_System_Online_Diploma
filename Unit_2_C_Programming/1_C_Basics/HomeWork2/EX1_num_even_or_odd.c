/**
Name          :   EX1_num_even_or_odd.c
Author        :   Mohamed Atia
Description   : (Unit_2 C-Progtamming) (C-Basic)  (Homework2 )  (EX1) (C Program to check wheter aNumber is even or odd)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned int Number = 0;

    printf("Enter an integer you want to check : ");
    scanf("%d", &Number);

    if ((Number % 2) == 00)
    {
        printf("%d is even.\n", Number);
    }

    else if ((Number % 2) == 1)
    {
        printf("%d is odd.\n", Number);
    }

    return 0;
}
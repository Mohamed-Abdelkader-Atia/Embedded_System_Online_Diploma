/**
Name          :   c_program_to_calculate_sum_of_Natural_Numbers.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX6) (c_program to calculate sum of Natural Numbers)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned int i = 0;
    unsigned int number = 0;
    unsigned int sum = 0;
    printf("Enter an integer : ");
    scanf("%d", &number);
    for (i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d", sum);
    return 0;
}
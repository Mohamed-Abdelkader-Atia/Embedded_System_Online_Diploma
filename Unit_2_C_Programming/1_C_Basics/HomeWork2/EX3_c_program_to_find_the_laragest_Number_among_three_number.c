/**
Name          :   EX3_c_program_to_find_the_laragest_Number_among_three_number.c
Author        :   Mohamed Atia
Description   :  (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX3) (C Program to find_the_laragest_Number_among_three_number)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float Number1 = 0;
    float Number2 = 0;
    float Number3 = 0;

    printf("Enter three Numbers :  ");
    scanf("%f %f %f", &Number1, &Number2, &Number3);

    if (Number1 >= Number2)
    {
        if (Number1 >= Number3)
        {
            printf("the largest value is %f(Number1)\n", Number1); /*Number1 is largest number*/
        }
        else
        {
            printf("the largest value is %f\n", Number3); /*Number3 is largest number*/
        }
    }
    else
    {
        if (Number2 >= Number3)
        {
            printf("the largest value is %f\n", Number2); /*Number2 is largest number*/
        }
        else
        {
            printf("the largest value is %f\n", Number3); /*Number3 is largest number*/
        }
    }
    return 0;
}
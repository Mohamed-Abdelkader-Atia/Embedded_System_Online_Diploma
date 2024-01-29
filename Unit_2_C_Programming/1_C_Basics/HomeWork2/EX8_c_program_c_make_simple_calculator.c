/**
Name          :   EX8_c_program_c_make_simple_calculator.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX8) (c_program to make simple calculator)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char operator= 0;
    float number1 = 0;
    float number2 = 0;

    printf("Enter operator + or - or * or / : ");
    scanf("%c", &operator);
    printf("Enter tow oprands: ");
    scanf("%f %f", &number1, &number2);
    if ((operator== '+') || (operator== '-') || (operator== '*') || (operator== '/'))
    {
        if (operator== '+')
            printf("%0.2f + %0.2f = %0.2f", number1, number2, number1 + number2);

        else if (operator== '-')
            printf("%0.2f - %0.2f = %0.2f", number1, number2, number1 - number2);

        else if (operator== '*')
            printf("%0.2f * %0.2f = %0.2f", number1, number2, number1 * number2);

        else if (operator== '/')
            printf("%0.2f / %0.2f = %0.2f", number1, number2, number1 / number2);
    }
    else
        printf("Error !operator is not correct ");

    return 0;
}
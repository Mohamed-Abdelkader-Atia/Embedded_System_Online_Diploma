/**
Name          :   EX7_c_program_to_find_factorial_of_a_Number.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX7) (c_program to find_factorial_of_a_Number)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int i = 0;
     int number = 0;
     int factorial = 1;

    printf("Enter an integer : ");
    scanf("%d", &number);
    if (number < 0)
        printf("Error!! factorial of negative number doesn't exit. \n");
    else if ((number == 0) || (number == 1))
        printf("factorial = 1\n");
    else if (number > 0)
    {
        for (i = 1; i <= number; i++)
        {
            factorial = factorial * i;
            
        }printf("factorial = %d", factorial);
    }

    return 0;
}
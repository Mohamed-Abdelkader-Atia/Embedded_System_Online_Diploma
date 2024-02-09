/**
Name          :   EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
Author        :   Mohamed Atia
Date          :  2024-February-09
*/
#include <stdio.h>
#include <stdlib.h>
int Calculate_Factorial(int num);
int main(void)
{
    int Number = 0;
    int Result = 0;
    printf("Enter an integer : ");
    scanf("%d", &Number);
    if (Number < 0)
    {
        printf("Error!! factorial of negative number doesn't exit. \n");
        return 0;
    }
    else if ((Number == 0) || (Number == 1))
    {
        printf("factorial = 1\n");
        return 0;
    }
    else if (Number > 0)
    {
        Result = Calculate_Factorial(Number);
        printf("factorial = %d\n", Result);
    }
    return 0;
}
int Calculate_Factorial(int num)
{
    if (num != 1)
    {
        return (num * (Calculate_Factorial(num - 1)));
    }
}
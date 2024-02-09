/**
Name          :   EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
Author        :   Mohamed Atia
Date          :  2024-February-09
*/
#include <stdio.h>
#include <stdlib.h>

int Calculate_Power(int base, int pow);
int main(void)
{
    float Base_Number = 0;
    unsigned int Power_Number = 0;
    float Result = 0;

    printf("Enter base number : ");
    scanf("%f", &Base_Number);
    printf("Enter Power number (postive integer) : ");
    scanf("%d", &Power_Number);
    Result = Calculate_Power(Base_Number, Power_Number);
    printf("(%0.2f)^(%d) = %0.2f", Base_Number, Power_Number, Result);

    return 0;
}
int Calculate_Power(int base, int pow)
{
    if (pow != 0)
    {
        return (base * (Calculate_Power(base, pow - 1)));
    }
    else
        return 1;
}
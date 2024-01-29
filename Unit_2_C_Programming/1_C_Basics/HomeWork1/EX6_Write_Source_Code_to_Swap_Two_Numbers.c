/**
Name          :   EX6_Write_Source_Code_to_Swap_Two_Numbers.c
Author        :   Mohamed Atia
Description   : (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX6) (C Program to Swap_Two_Numbers)
Date          :  2024-January-27


*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 0;
    float b = 0;
    float temp = 0;
    printf("Enter the  two number : ");
    scanf("%f%f", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);

    return 0;
}
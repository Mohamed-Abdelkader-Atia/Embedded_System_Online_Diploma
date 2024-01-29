/**
Name          :   EX7_Write_Source_Code_to_Swap_Two_Numbers_without_temp_variable.c
Author        :   Mohamed Atia
Description   :  (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX7) (C Program to Swap Two Numbers without temp variable)
Date          :  2024-January-27


*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a = 0;
    float b = 0;

    printf("Enter the  two number : ");
    scanf("%f%f", &a, &b);

    a = a + b;
    b = a - b; /*b = (a + b)- b = a*/
    a = a - b; /*a = a+b -(a) = b*/

    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);

    return 0;
}
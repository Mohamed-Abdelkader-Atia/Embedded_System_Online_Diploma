/**
Name          :   EX4_C_Program_to_Multiply_two_Floating_Point_Numbers.c
Author        :   Mohamed Atia
Description   :  (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX4) (C Program to Multiply_two_Floating_Point_Numbers)
Date          :  2024-January-27


*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    float numberone = 0;
    float numbertwo = 0;
    float Multiply = 0;

    printf("Enter two Floating : ");
    scanf("%f %f", &numberone, &numbertwo);
    Multiply = numberone + numbertwo;
    printf("Multiply = %f", Multiply);
    return 0;
}
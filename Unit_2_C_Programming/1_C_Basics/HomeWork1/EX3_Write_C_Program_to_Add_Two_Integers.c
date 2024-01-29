/**
Name          :   EX3_Write_C_Program_to_Add_Two_Integers.c
Author        :   Mohamed Atia
Description   :  (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX3) (C Program to Add Two Integers)
Date          :  2024-01-27


*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int numberone = 0;
    unsigned int numbertwo = 0;
    unsigned int sum = 0;

    printf("Enter two integers : ");
    scanf("%d %d", &numberone, &numbertwo);
    sum = numberone + numbertwo;
    printf("sum = %d",sum);
    return 0;
}
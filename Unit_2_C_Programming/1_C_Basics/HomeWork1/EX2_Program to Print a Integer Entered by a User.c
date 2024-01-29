/**
Name          :   EX2_Program_to_Print_a_Integer_Entered_by_a_User.c
Author        :   Mohamed Atia
Description   :  (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX2) (C Program to Print_a_Integer_Entered_by_a_User)
Date          :  2024-01-27
*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{   int number = 0;
    printf ("Enter a integer: ");
    scanf("%d",&number);
    printf("You entered: %d",number);
    return 0;
}
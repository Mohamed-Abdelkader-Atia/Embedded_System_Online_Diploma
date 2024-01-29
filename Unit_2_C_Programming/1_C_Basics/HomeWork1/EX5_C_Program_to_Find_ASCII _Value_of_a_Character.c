/**
Name          :   EX5_C_Program_to_Find_ASCII _Value_of_a_Character.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Assignment 1)  (EX5) (C Program to Find_ASCII _Value_of_a_Character)
Date          :  2024-January-27


*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Character = 0;
    printf("Enter the  Character : ");
    scanf("%c",&Character);
    printf("ASCII value of %c is %d ", Character, Character);
    
    return 0;
}
/**
Name          :   EX4_negative_or_positive.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX4) (negative_or_positive)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float Number = 0;
    printf("Enter a number :  ");
    scanf("%f", &Number);

    if (Number >= 0)
    {
        if (Number > 0)
            printf("%f is positive \n", Number);
        else
            printf("You entered zero\n");
    }
    else if (Number < 0)
        printf("%f is negative \n", Number);

    return 0;
}

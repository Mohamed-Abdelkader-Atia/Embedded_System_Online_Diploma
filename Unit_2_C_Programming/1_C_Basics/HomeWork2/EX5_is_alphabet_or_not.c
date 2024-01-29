/**
Name          :   EX5_is_alphabet_or_not.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX5) (is_alphabet_or_not)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char c = 0;
    printf("Enter a character :  ");
    scanf("%c", &c);
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        printf("%c is alphabet \n", c);
    else
        printf("%c is not  alphabet \n", c);

    return 0;
}

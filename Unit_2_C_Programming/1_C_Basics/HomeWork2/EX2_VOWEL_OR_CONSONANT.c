/**
Name          :   EX2_c_program_to_check_vowel_or_consonant.c
Author        :   Mohamed Atia
Description   :   (Unit_2 C-Progtamming) (C-Basic)  (Homework2)  (EX2) (C Program to Add Two Integers)
Date          :  2024-January-27
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char c;

    char arr[11] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    printf("Enter an alphabet : ");
    scanf("%c", &c);
    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
    {
        printf("%c is a vowel. \n", c);
        return 0;
    }

    else
        printf("%c is a consonant. \n", c);

    return 0;
}
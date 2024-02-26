/**
Name          :   EX2_Write_a_program_in_C_to_print_all_the_alphabets_using_a_pointer.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char alphabets[26];
    char *ptr = alphabets;
    int i = 0;
    for (i = 0; i < 26; i++)
    {
        *ptr = i + 'A';
        ptr++;
    }
    ptr = &alphabets[0]; /* make ptr point on alphabets[0] */
    for (i = 0; i < 26; i++)
    {
        printf("%c\t", *ptr);
        ptr++;
        if (12 == i)
        {
            printf("\n");
        }
    }

    return 0;
}
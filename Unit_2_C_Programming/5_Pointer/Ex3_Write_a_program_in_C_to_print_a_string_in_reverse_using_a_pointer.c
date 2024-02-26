/**
Name          :   Ex3_Write_a_program_in_C_to_print_a_string_in_reverse_using_a_pointer.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    char *ptr = str;
    int i = 0;
    printf("Input string : ");
    gets(str);
    ptr = &str[strlen(str) - 1];
    printf("Reverse of the string is : ");
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}
/**
Name          :   EX2_C_Program_To_Find_the_length_of_string.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i = 0;
    int counter = 0;
    int length = 0;
    char arr[50];
    printf("Enter a string : ");
    gets(arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        counter++;
    }
    printf("Length of string  = %d ", counter);

    return 0;
}
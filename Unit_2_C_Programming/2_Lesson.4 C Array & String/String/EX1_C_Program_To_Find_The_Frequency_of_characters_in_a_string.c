/**
Name          :   EX1_C_Program_To_Find_The_Frequency_of_characters_in_a_string.c
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
    char arr[50];
    char character;
    printf("Enter a string : ");
    gets(arr);
    printf("Enter a character to find frequency: ");
    scanf("%c", &character);
    for (i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == character)
        {
            counter++;
        }
    }
    printf("Frequency of %c = %d", character, counter);

    return 0;
}
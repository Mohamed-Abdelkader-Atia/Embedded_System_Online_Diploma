/**
Name          :   EX2_3_Program_To_Reverse_string_without_using_library_function.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char arr[50];
    int i = 0;
    char temp = 0;
    printf("Enter a string : ");
    gets(arr);
   
    for (i = 0; i < strlen(arr) - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[strlen(arr) - 1];
        arr[strlen(arr) - 1] = temp;
    }
    printf("Reverse string is: %s",arr);

    return 0;
}
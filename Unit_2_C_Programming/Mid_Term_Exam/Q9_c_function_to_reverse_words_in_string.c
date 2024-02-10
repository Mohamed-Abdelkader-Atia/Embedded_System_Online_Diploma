/**
Name          :   Q9_c_function_to_reverse_words_in_string.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 50
void reverse(char arr[], int first, int Last);
int main(void)
{
    char array[MAX_SIZE];
    printf("Enter a sentence: ");
    gets(array); /*get string from user*/
    reverse(array, 0, strlen(array));
    return 0;
}

void reverse(char arr[], int first, int Last)
{
    char temp = 0;
    if (Last <= first) /*the condition to stop the recursion*/
    {
        printf("%s", arr); /*print the array after the reverse*/
    }
    else
    {
        /*swap the first index with Last index */
        temp = arr[first];
        arr[first] = arr[Last - 1];
        arr[Last - 1] = temp;
        first++;                   /*increment the first*/
        Last--;                    /*decrement the Last*/
        reverse(arr, first, Last); /*recursion by new values of indexes*/
    }
}
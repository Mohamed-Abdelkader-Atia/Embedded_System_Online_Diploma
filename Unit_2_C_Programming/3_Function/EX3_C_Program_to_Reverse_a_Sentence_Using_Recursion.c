/**
Name          :   EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
Author        :   Mohamed Atia
Date          :  2024-February-09
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
    fflush(stdin);
    fflush(stdout);
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

/**
Name          :   EX2_C_Program_To_Calculate_Average_Using_Array.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a[50];
    int number = 0;
    float Average = 0;
    float sum = 0;
    char i = 0;

    printf("Enter the number of data : ");
    scanf("%d", &number);
    while ((number > 50) || (number < 0))
    {
        printf("Error! number should be in range of (1 to 50)");
        printf("Enter the number agin : ");
        scanf("%d", &number);
    }

    for (i = 0; i < number; i++)
    {
        printf("Enter number %d  ", i + 1);
        scanf("%f", &a[i]);
        sum = sum + a[i];
    }
    Average = (float)sum / number;
    printf("Average = %0.2f", Average);
    return 0;
}
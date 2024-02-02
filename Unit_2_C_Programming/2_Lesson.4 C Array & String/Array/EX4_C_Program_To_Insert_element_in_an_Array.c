/**
Name          :   EX4_C_Program_To_Insert_element_in_an_Array.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float arr[20];
    float inserted_element = 0;
    int location = 0;
    int number = 0;
    int i = 0;
    /* //!storing number  of elements */
    printf("Enter number  of elements : ");
    scanf("%d", &number);
    /* //! check number in range (1 to 19) */
    while ((number > 19) || (number < 0))
    {
        printf("Error! number should be in range of (1 to 20)\n");
        printf("Enter number  of elements  agin : ");
        scanf("%d", &number);
    }
    /* //!storing element of array entered by user ina array Matrix [] */
    for (i = 0; i < number; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("\n");
    printf("Enter the  element to be inserted  : ");
    scanf("%f", &inserted_element);
    printf("Enter the  location to be inserted  : ");
    scanf("%d", &location);

    for (i = number; i >= location; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[location - 1] = inserted_element;
    for (i = 0; i <= number; i++)
    {
        printf("%0.2f \t", arr[i]);
    }

    return 0;
}
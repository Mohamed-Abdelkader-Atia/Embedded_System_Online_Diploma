/**
Name          :   EX5_C_Program_To_Serch_ an_element_in_an_Array.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float arr[20];
    float searched_element = 0;
    int location = 0;
    int number_elements = 0;
    int i = 0;
    /* //!storing number  of elements */
    printf("Enter number  of elements : ");
    scanf("%d", &number_elements);
    /* //! check number in range (1 to 19) */
    while ((number_elements > 20) || (number_elements < 0))
    {
        printf("Error! number should be in range of (1 to 20)\n");
        printf("Enter number  of elements  agin : ");
        scanf("%d", &number_elements);
    }
    /* //!storing element of array entered by user ina array  */
    for (i = 0; i < number_elements; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("\n");
    printf("Enter the  element to be searched  : ");
    scanf("%f", &searched_element);

    for (i = 0; i < number_elements; i++)
    {
        if (arr[i] == searched_element)
        {
            printf("Number found at the location = %d \n", i + 1);
            break;
        }
    }
    if (i == number_elements)
    {
        printf("Number Not Found ");
    }

    return 0;
}
/**
Name          :   EX4_Write_a_program_in_C_to_print_the_elements_of_an_array_in_reverse__order_Test_Data.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
#define max_size_array 20
int main()
{
    int arr[max_size_array];
    int number_of_element = 0;
    int *P_arr = arr;
    int i = 0;
    /*Get number of element from user*/
    printf("Enter the number of element : ");
    scanf("%d", &number_of_element);

    printf("input %d number of element\n", number_of_element);
    /*Get element of array  from user*/
    for (i = 0; i < number_of_element; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", P_arr++);
    }
    P_arr = &arr[number_of_element - 1];

    printf("\n");
    /*  print_the_elements_of_an_array_in_reverse__order  */
    for (i = number_of_element; i > 0; i--)
    {
        printf("element - %d : %d \n", i, *P_arr--);
    }

    return 0;
}
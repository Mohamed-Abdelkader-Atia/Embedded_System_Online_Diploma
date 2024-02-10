/**
Name          :   Q6_c_function_to_return_unique_number_in_array_with_one_loop.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
#define Max_size 50
void uniqueEle(int arr[], int size);
int main()
{
    int array[Max_size];
    int size_of_Array = 0;
    int i = 0;
    printf("Enter size of Array (Max 50): ");
    scanf("%d", &size_of_Array);

    for (i = 0; i < size_of_Array; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array[i]);
    }
    uniqueEle(array, size_of_Array);
    return 0;
}
void uniqueEle(int arr[], int size)
{
    printf("unique elements in an array is : ");
    int i = 0;
    int j = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == size)
        {
            printf("%d\t", arr[i]);
        }
    }
}
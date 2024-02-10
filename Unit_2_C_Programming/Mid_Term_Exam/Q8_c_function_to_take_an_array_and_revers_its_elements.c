/**
Name          :   Q8_c_function_to_take_an_array_and_revers_its_elements.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

void Reverse(int arr[], int len);

int main()
{
    int arr[MAX_SIZE];
    int size_of_Array = 0;
    int i = 0;

    printf("Enter size of First_Array (Max 50): ");
    scanf("%d", &size_of_Array);
    printf("input : ");
    for (i = 0; i < size_of_Array; i++)
    {
        scanf("%d", &arr[i]);
    }
    Reverse(arr, size_of_Array);
    return 0;
}
void Reverse(int arr[], int len)
{
    int first = 0;
    int last = 0;
    int i = 0;
    last = len - 1;
    while (first < last)
    {
        int Temp = arr[first];
        arr[first] = arr[last];
        arr[last] = Temp;
        first++;
        last--;
    }
    printf("output: ");
    for (i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
}

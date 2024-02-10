/**
Name          :   Q5_c_function_to_count_number_of_ones_in_binary_number.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int count_ones(int num);
int main(void)
{
    int Number = 0;
    printf("input : ");
    scanf("%d", &Number);
    printf("output : %d\n", count_ones(Number));
    return 0;
}
int count_ones(int num)
{
    short count = 0;

    while (num != 0)
    {
        count = count + (num & 1);
        num = num >> 1;
    }
    return count;
}
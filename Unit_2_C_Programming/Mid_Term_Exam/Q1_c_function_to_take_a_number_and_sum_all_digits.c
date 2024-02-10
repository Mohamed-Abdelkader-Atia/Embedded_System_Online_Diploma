/**
Name          :   Q1_c_function_to_take_a_number_and_sum_all_digits.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int sum_digits(int num);
int main(void)
{
    int Number = 0;
    printf("input : ");
    scanf("%d", &Number);
    printf("output : %d\n", sum_digits(Number));
    return 0;
}
int sum_digits(int num)
{
    int sum = 0;
    int remainder = 0;
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    return sum;
}
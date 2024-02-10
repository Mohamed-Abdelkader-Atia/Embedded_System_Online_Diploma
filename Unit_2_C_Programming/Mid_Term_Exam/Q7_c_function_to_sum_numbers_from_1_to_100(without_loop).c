/**
Name          :   Q7_c_function_to_sum_numbers_from_1_to_100(without_loop).c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int sum_numbers(int num1, int num2);
int sum = 0;
int main()

{
    int NumberOne = 0;
    int NumberTwo = 0;
    printf("Enter two number ");
    scanf("%d%d", &NumberOne, &NumberTwo);
    printf("Sum of Numbers from %d to %d is : ", NumberOne, NumberTwo);
    sum_numbers(NumberOne, NumberTwo);
    return 0;
}
int sum_numbers(int num1, int num2)
{
    if (num1 <= num2)
    {
        sum += num1;
        num1++;
        sum_numbers(num1, num2);
    }

    if (num1 == num2)
    {
        printf("%d\n", sum);
    }
}
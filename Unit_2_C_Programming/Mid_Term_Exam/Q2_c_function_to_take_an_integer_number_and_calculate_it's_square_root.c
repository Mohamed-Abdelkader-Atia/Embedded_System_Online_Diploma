/**
Name          :   Q2_c_function_to_take_an_integer_number_and_calculate_it's_square_root.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float square_root(int num);
int main(void)
{
    int Number = 0;
    printf("input : ");
    scanf("%d", &Number);
    printf("output : %0.3f\n", (float)square_root(Number));
    return 0;
}
float square_root(int num)
{
    float square = 0;
    square = sqrt(num);

    return square;
}
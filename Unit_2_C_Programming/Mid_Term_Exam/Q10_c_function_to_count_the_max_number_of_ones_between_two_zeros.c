/**
Name          :   Q10_c_function_to_count_the_max_number_of_ones_between_two_zeros.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int count_the_max_number_of_ones(int num);
int main(void)
{
    int Number = 0;
    printf("Enter the number : ");
    scanf("%d", &Number);
    printf("the_max_number_of_ones_between_two_zeros = %d", count_the_max_number_of_ones(Number));
    return 0;
}
int count_the_max_number_of_ones(int num)
{
    int Bits_Numbers = 31;
    int newnumber = 0;
    int count = 0;
    int number_of_ones = 0;
    while (Bits_Numbers >= 0)
    {
        newnumber = (num >> Bits_Numbers);

        if (newnumber & 0b1)
        {
            count++;
        }
        else
        {
            if (count > number_of_ones)
            {
                number_of_ones = count;
                count = 0;
            }
            else
            {
                count = 0;
            }
        }
        Bits_Numbers--;
    }
    return number_of_ones;
}
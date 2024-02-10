/**
Name          :   Q3_c_function_to_print_all_prime_numbers_between_two_numbers.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int check_prim(int num);
int main(void)
{
    int First_number = 0;
    int Second_number = 0;
    int flag = 0;
    int i = 0;
    printf("input : ");
    scanf("%d%d", &First_number, &Second_number);
    printf("output : ");
    for (i = First_number + 1; i < Second_number; i++)
    {
        flag = check_prim(i);
        if (flag == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
int check_prim(int num)
{
    unsigned int j = 0;
    short int flag = 0;
    for (j = 2; j <= (num / 2); j++)
    {
        if (num % j == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

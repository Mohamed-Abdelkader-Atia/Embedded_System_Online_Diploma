/**
Name          :   Q4_c_function_to_revers_digits_in_number.c
Author        :   Mohamed Atia
Date          :  2024-February-10
*/
#include <stdio.h>
#include <stdlib.h>
int reverseDigits(int num);
int main()
{
    int Number = 0;
    int reversedNumber = 0;
    printf("input : ");
    scanf("%d", &Number);
    reversedNumber = reverseDigits(Number);
    printf("output : %d\n", reversedNumber);
    return 0;
}
int reverseDigits(int num)
{
    int reversedNum = 0;
    int remainder = 0;
    /* Extract digits one by one from the input number and append them in reverse order to the reversedNum */
    while (num != 0)
    {
        remainder = num % 10;                       /* Extract the last digit */
        reversedNum = reversedNum * 10 + remainder; /* Append the digit to the reversed number */
        num = num / 10;                             /* Remove the last digit */
    }

    return reversedNum;
}

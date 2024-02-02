/**
Name          :   EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a[2][2];
    float b[2][2];
    float sum[2][2];

    int row = 0;
    int col = 0;
    printf("Enter the elements of 1st matrix\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("Enter a%d%d  ", row + 1, col + 1);
            scanf("%f", &a[row][col]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("Enter b%d%d ", row + 1, col + 1);
            scanf("%f", &b[row][col]);
        }
    }

    printf("Sum of the matrix : \n");

    for (row = 0; row < 2; row++)
    {

        for (col = 0; col < 2; col++)
        {
            sum[row][col] = a[row][col] + b[row][col];
            printf("%0.1f \t", sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}
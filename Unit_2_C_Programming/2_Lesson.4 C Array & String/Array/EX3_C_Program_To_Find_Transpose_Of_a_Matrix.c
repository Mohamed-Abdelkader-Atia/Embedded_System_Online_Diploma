/**
Name          :   EX3_C_Program_To_Find_Transpose_Of_a_Matrix.c
Author        :   Mohamed Atia
Date          :  2024-February-02
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float Matrix[20][20];
    float Transpose[20][20];

    int column = 0;
    int row = 0;
    int i = 0;
    int j = 0;
    /* //!storing number  of column and row */
    printf("Enter rows and column of matrix : ");
    scanf("%d%d", &row, &column);
    /* //! check row and cloumn in range (1 to 20) */
    while (((row > 20) || (row < 0)) || ((column > 20) || (column < 0)))
    {
        printf("Error! number should be in range of (1 to 50)\n");
        printf("Enter rows and column of matrix agin : ");
        scanf("%d%d", &row, &column);
    }
    /* //!storing element of matix entered by user ina array Matrix [][] */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("enter a%d%d :  ", i + 1, j + 1);
            scanf("%f", &Matrix[i][j]);
        }
    }
    /* //!Disp;aying the Matrix [][] */

    printf("\n");
    printf("Entered Matrix is \n");

    for (i = 0; i < row; i++)
    {

        for (j = 0; j < column; j++)
        {
            printf("%0.2f \t", Matrix[i][j]);
        }
        printf("\n");
    }

    /* //!Finding transpose of   Matrix [][] and soring it in array Transpose [][] */

    for (i = 0; i < row; i++)
    {

        for (j = 0; j < column; j++)
        {
            Transpose[i][j] = Matrix[j][i];
        }
    }
    printf("\n");
    /* //!Disp;aying the  Transpose Matrix [][] */
    printf("Transpose matrix : \n");
    for (i = 0; i < row; i++)
    {

        for (j = 0; j < column; j++)
        {
            printf("%0.2f \t", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
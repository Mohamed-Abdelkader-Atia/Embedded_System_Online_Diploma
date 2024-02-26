/**
Name          :   EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
Author        :   Mohamed Atia
Date          :  2024-February-23
*/
#include <stdio.h>
#include <stdlib.h>
struct Distance
{
    float feet;
    float inch;
};
int main()
{
    struct Distance D1, D2, sum;
    /*Get Two Distance from user */
    printf("Enter information for 1st distance \n");
    printf("Enter feet : ");
    scanf("%f", &D1.feet);
    printf("Enter inch : ");
    scanf("%f", &D1.inch);
    printf("Enter information for 2nd distance \n");
    printf("Enter feet : ");
    scanf("%f", &D2.feet);
    printf("Enter inch : ");
    scanf("%f", &D2.inch);
    sum.feet = D1.feet + D2.feet;
    sum.inch = D1.inch + D2.inch;
    /**feet  = 12 * inch*/
    if (sum.inch > 12)
    {
        sum.inch = sum.inch - 12.0;
        sum.feet++;
    }
    printf("Sum of distances = %0.1f feet and %0.1f inch", sum.feet, sum.inch);
    return 0;
}
/**
Name          :   EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
#define area(radius) ((float)(3.14 * radius * radius))
int main()
{
    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    printf("Area = %0.2f", area(radius));
    return 0;
}

/**
Name          :   EX1_C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 29;
    int *ab = NULL;

    printf("Address of m : 0x%p\n", &m);
    printf("Value of m : %d\n\n", m);

    ab = &m;
    printf("Address of pointer ab : 0x%p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    m = 34;
    printf("Address of pointer ab : 0x%p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    *ab = 7;
    printf("\nAddress of pointer m : 0x%p\n", &m);
    printf("Content of pointer m : %d\n", m);

    return 0;
}

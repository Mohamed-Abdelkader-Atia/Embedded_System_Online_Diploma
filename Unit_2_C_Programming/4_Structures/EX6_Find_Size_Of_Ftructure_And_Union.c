/**
Name          :   EX6_Find_Size_Of_Ftructure_And_Union.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
union job
{
    char name[32];
    float salary;
    int worker_no;
} u;
struct job1
{
    char name[32];
    float salary;
    int worker_no;
} s;
int main()
{
    printf("Size of the union is: %llu\n", sizeof(u));
    printf("Size of the structure is: %llu", sizeof(s));
    return 0;
}

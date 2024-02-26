/**
Name          :   EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
Author        :   Mohamed Atia
Date          :  2024-February-23
*/
#include <stdio.h>
#include <stdlib.h>
struct SComplex ReadComplex(char name[]);                         /* Function to Get two Complex numbers from user */
struct SComplex AddComplex(struct SComplex A, struct SComplex B); /* Function to Add two Complex numbers */
void PrintComplex(char name[], struct SComplex C);                /* Function to print Sum  of two Complex numbers  */
struct SComplex
{
    double m_Real;
    double m_Imag;
};
int main(void)
{
    struct SComplex First_Number, Second_Number, Sum;
    First_Number = ReadComplex("1st");
    Second_Number = ReadComplex("2nd");
    Sum = AddComplex(First_Number, Second_Number);
    PrintComplex("sum", Sum);
    return 0;
}

struct SComplex ReadComplex(char name[])
{
    struct SComplex c;
    printf("Enter %s Complex number(EX : 5 , -3): ", name);
    scanf("%lf%lf", &c.m_Real, &c.m_Imag);
    return c;
}

struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
    struct SComplex C;
    C.m_Real = A.m_Real + B.m_Real;
    C.m_Imag = A.m_Imag + B.m_Imag;
    return C;
}

void PrintComplex(char name[], struct SComplex C)
{
    printf("%s = (%0.2lf) + j(%0.2lf) \n", name, C.m_Real, C.m_Imag);
}

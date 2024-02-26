/**
Name          :   EX5_Write_a_program_in_C_to_show_a_pointer_to_an_array_which_contents_are_pointer_to_structure.c
Author        :   Mohamed Atia
Date          :  2024-February-24
*/
#include <stdio.h>
#include <stdlib.h>
struct SEmployee
{
    char *name;
    int id;
};
int main()
{
    struct SEmployee employee1 = {"Mohamed Atia", 1002};
    struct SEmployee employee2 = {"Ahmed ali", 1004};
    struct SEmployee employee3 = {"Mohamed Yasser", 1006};
    struct SEmployee *arr[] = {&employee1, &employee2, &employee3};
    struct SEmployee *(*P_arr_emp)[3] = &arr;
    printf(" Employee Name : %s \n", (*(*P_arr_emp))->name);
    printf(" Employee ID :  %d \n", (*(*P_arr_emp))->id);
    return 0;
}

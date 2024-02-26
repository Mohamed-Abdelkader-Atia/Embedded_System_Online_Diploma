/**
Name          :   EX1_C_Program_to_Store_Information_of_a_Student_Using_Structure.c
Author        :   Mohamed Atia
Date          :  2024-February-23
*/
#include <stdio.h>
#include <stdlib.h>

struct SStudentInformation
{
    char m_Name[50];
    int m_RollNumber;
    float m_Marks;
};
int main()
{
    struct SStudentInformation Student_Info;
    /*Get information of students from user */
    printf("Enter information of students : \n");
    printf("Enter name: ");
    scanf("%s", Student_Info.m_Name);
    printf("Enter roll number: ");
    scanf("%d", &Student_Info.m_RollNumber);
    printf("Enter marks: ");
    scanf("%f", &Student_Info.m_Marks);

    printf("\n");
    /*Get information of students from user */
    printf("Displaying Information: \n");
    printf("name : %s\n", Student_Info.m_Name);
    printf("Roll : %d\n", Student_Info.m_RollNumber);
    printf("Marks: %.2f\n", Student_Info.m_Marks);
    return 0;
}

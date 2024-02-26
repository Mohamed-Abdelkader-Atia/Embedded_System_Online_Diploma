/**
Name          :   EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
Author        :   Mohamed Atia
Date          :  2024-February-23
*/
#include <stdio.h>
#include <stdlib.h>
#define Number_Of_Stdent 10
struct SStudentInformation ReadInformation(struct SStudentInformation Student_Data); /*Function to Get information of students from user */
void PrintInformation(struct SStudentInformation Student_Data);                      /* Function to print information of studentss  */
struct SStudentInformation
{
    char m_Name[50];
    int m_RollNumber;
    float m_Marks;
};
int main()
{
    struct SStudentInformation Student_Info;
    struct SStudentInformation Student_Data[Number_Of_Stdent];
    int i = 0;

    /*Get information of students from user*/
    printf("Enter information of %d students : \n", Number_Of_Stdent);
    for (i = 0; i < Number_Of_Stdent; i++)
    {
        printf("Enter information of student[%d] : \n", i + 1);
        Student_Data[i] = ReadInformation(Student_Info);
    }

    printf("\n");
    
    /*print information of studentss*/
    printf("Displaying Information of %d students : \n", Number_Of_Stdent);
    for (i = 0; i < Number_Of_Stdent; i++)
    {
        printf("Displaying information of student[%d] : \n", i + 1);
        PrintInformation(Student_Data[i]);
    }
    return 0;
}

struct SStudentInformation ReadInformation(struct SStudentInformation Student_Data)
{
    printf("Enter information of students : \n");
    printf("Enter name : ");
    scanf("%s", Student_Data.m_Name);
    printf("Enter roll number : ");
    scanf("%d", &Student_Data.m_RollNumber);
    printf("Enter marks : ");
    scanf("%f", &Student_Data.m_Marks);
    return Student_Data;
}

void PrintInformation(struct SStudentInformation Student_Data)
{
    
    printf("name : %s\n", Student_Data.m_Name);
    printf("Roll : %d\n", Student_Data.m_RollNumber);
    printf("Marks: %.2f\n", Student_Data.m_Marks);
}

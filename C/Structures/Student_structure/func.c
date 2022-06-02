#include "header.h"

int count=0;

void student_count()
{
    printf("Enter the number of students:");
    scanf("%d",&count);
    putchar('\n');
}
void input_data(Student *ptr,int i)
{
    getchar();
    printf("Enter the name of student: ");
    scanf("%[^\n]s",(ptr+i)->name);
    getchar();
    printf("Enter the branch of student: ");
    scanf("%[^\n]s",(ptr+i)->branch);
    getchar();
    printf("Enter the CGPA of student: ");
    scanf("%[^\n]s",&(ptr+i)->CGPA);
    putchar('\n');
}
void print(Student *ptr)
{
    int i=0;
    printf("Total number of students is %d and their details are: \n\n",count);
    while(i<count)
    {
        printf("Details of student %d: \n",i+1);
        printf("Name   : %s\n",(ptr+i)->name);
        printf("Branch : %s\n",(ptr+i)->branch);
        printf("CGPA   : %d\n\n",(ptr+i)->CGPA);
        i++;
    }
}
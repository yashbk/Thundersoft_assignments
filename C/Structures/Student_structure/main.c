//Author : Yashas B K
//Date : 01-06-2022
//Description : Wap to declare an array of struct containing student data - name , branch , cgpa \
                - write student_count(..) fn to take input on no.of students \
                - write input_data(..) fn to input details of student data \
  		        - write print(..) fn to print details of all students

#include "header.h"

extern int count;

int main()
{
    student_count();
    Student students[count];
    int i=0;
    while(i<count)
    {
        printf("Enter the details of student %d: \n",i+1);
        input_data(students,i);
        i++;
    }
    print(students);
    
}
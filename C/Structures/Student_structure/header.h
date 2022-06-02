#ifndef header_h
#define header_h

#include <stdio.h>

typedef struct {
    char name[20];
    char branch[20];
    float CGPA;
}Student;


void student_count();
void input_data(Student *ptr,int i);
void print(Student *ptr);

#endif
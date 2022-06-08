/*
Semantic errors: 
Semantic errors are the errors that occurred when the statements are not understandable by the compiler.
->Incompatible types of operands
->Not matching of actual argument with formal argument
->Printing out of bound element is also semantic error
*/

#include <stdio.h>

int main()
{
    int num = "hello"; //Incompatible types of operands
    one = 20; //Undeclared variable
    
    int sub = 5-"hi"; //Argument doesn't support arguments of type string

    int a=3;
    ++a++; //lvalue required error
    int m,n;
    m*n = one; //lvalue required error
}
/*
Syntax errors:

->Missing semi-colon (;)
->Missing parenthesis ({})
->Assigning value to a variable without declaring it
*/
#include <stdio.h>

int main()
{
    printf("Hello world") //No semicolon
    for(;); //Error bcz for loop must contain two semicolons inside

    if(1)
    { //Missing close bracket so this will give error

    
}
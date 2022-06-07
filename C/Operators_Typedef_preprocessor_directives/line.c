#include <stdio.h>
//#line <line_number> <file_name> 
//The #line directive is one of the widely used directives in C. Its main purpose is to reset the line number and filename in the code

int main()
{
    printf("Line number is %d \n",__LINE__);
    #line 56
    printf("\nLine number is %d and file name is %s\n",__LINE__,__FILE__);
    #line 2 "new.c"
    printf("\nLine number is %d and file name is %s\n",__LINE__,__FILE__);
}
#include<stdio.h>
#ifndef __MATH_H
#define __MATH_H //Comment this to get the error
#include <math.h>
#endif

#ifndef __MATH_H  
#error First include then compile  
#else  
void main(){  
    float a;  
    a=sqrt(7);  
    printf("%f",a);  
}  
#endif 
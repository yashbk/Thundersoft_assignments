#include <stdio.h>

#define HI

int main()
{

#ifdef HI
printf("HI defined\n");
#else
printf("HI not defined\n");
#endif


#undef HI

#ifdef defined
printf("HI defined\n");
#else
printf("HI not defined\n");
#endif

}


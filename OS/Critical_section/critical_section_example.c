
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *first_half(void *num)
{
    int *ptr = num;
    int foo = *ptr;
    usleep(250000);
    foo++;
    *ptr = foo;
}
void *second_half(void *num)
{
    int *ptr = num;
    int foo = *ptr;
    usleep(250000);
    foo--;
    *ptr = foo;
}

int main()
{
    int num = 0;
    pthread_t one,two;
    pthread_create(&one,NULL,first_half,&num);
    pthread_create(&two,NULL,second_half,&num);
    pthread_join(one,NULL);
    pthread_join(two,NULL);
    printf("%d",num);
    
    return 0;
}

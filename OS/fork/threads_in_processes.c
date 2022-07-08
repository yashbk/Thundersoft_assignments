#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *printA()
{
    for (int k = 0; k < 20000; k++)
    {
        printf("A");
    }

    printf("\n");
    
}

void *printa()
{
    for (int k = 0; k < 20000; k++)
    {
        printf("a");
    }
    printf("\n");
    
}

int main()
{
    int ret;
    pthread_t parent,child;
    ret = fork();
    printf("%d and pid is %d\n",ret,getpid());
    if (ret == -1)
    {
        printf("child creation failed\n");
    }
    else if (ret > 0)
    {
        printf("Parent thread %d",pthread_create(&parent,NULL,printA,NULL));
        for(int i=0;i<20000;i++)
        {
            printf("(A)");
        }
        pthread_join(parent,NULL);
    }
    else
    {
        printf("Child thread %d",pthread_create(&child,NULL,printa,NULL));
        for(int i=0;i<20000;i++)
        {
            printf("(a)");
        }
        pthread_join(child,NULL);
    }
}
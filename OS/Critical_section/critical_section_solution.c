
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock;

void *first_half(void *num)
{
    pthread_mutex_lock(&lock);

    int *ptr = num;
    int foo = *ptr;
    usleep(250000);
    foo++;
    *ptr = foo;
    pthread_mutex_unlock(&lock);
}
void *second_half(void *num)
{
    pthread_mutex_lock(&lock);
    int *ptr = num;
    int foo = *ptr;
    usleep(250000);
    foo--;
    *ptr = foo;
    pthread_mutex_unlock(&lock);
}

int main()
{
    int num = 0;
    pthread_t one, two;
    pthread_create(&one, NULL, first_half, &num);
    pthread_create(&two, NULL, second_half, &num);
    pthread_join(one, NULL);
    pthread_join(two, NULL);
    printf("%d", num);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
 
int x = 0;
 
void *myThreadFun(void *vargp)
{
    int myid = (int)vargp;
 
    int v = 0;
 
    ++v; ++x;
 
    printf("Thread ID: %d, Value1: %d, Value2: %d\n", myid, v, x);
}
 
int main()
{
    int i;
    pthread_t tid[3]; 

    for (i = 0; i < 3; i++)
        pthread_create(&tid[i], NULL, myThreadFun, (void *)i);

  
 
	pthread_join(tid[i], NULL);

    return 0; 
}


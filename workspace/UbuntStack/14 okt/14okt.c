#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <fcntl.h>
#include <assert.h>
#include <pthread.h>
#include <math.h>

void* f1(void *arg )
{
	int x = *(int*)arg;
	int i;
	for(i = 0; i < 10; i++)
		printf("%d \n", i);
	return NULL;
}

/*void* f2(void *arg )
{
	int i;
	for(i = 100; i < 110; i++)
		printf("%d \n", i);
	return NULL;
}
*/
int main ()
{

	pthread_t t1, t2;
	pthread_create(&t1, NULL, f1, NULL);
	pthread_create(&t2, NULL, f2, NULL);
	// printf("%d \n", pthread_self );
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <fcntl.h>
#include <assert.h>


int main ()
{
	int i, j, k;
	int arr[10];
	key_t c;
	char* q;

		for (i=0; i<10; i++)
			scanf ("%d", arr[i]);

	c = ftok ("ftokfile", 316 );
	i = shmget (c,20,IPC_CREAT|0666);
	q = shmat(i,NULL,0);

	strcpy(q, "Narkomany chto li?\n");


		printf ("%s\n", q);
	return 0;
}

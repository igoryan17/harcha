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
	int i, cpid;
	key_t c;
	char* q;


	c = ftok ("ftokfile", 316 );
	i = shmget (c,20,IPC_CREAT|0666);
	q = shmat(i,NULL,0);

	strcpy(q, "Narkomany chto li?\n");

	cpid = fork();

	if (cpid !=0)
		printf ("%s\n", q);
	return 0;
}

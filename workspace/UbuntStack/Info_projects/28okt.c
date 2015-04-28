#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <sys/ipc.h>

/*
int main() {
	key_t key  = ftok("/dev/null",1);
	assert(key!=-1);

	int id = msgget(key, 0666 | IPC_CREAT);
	assert(id!=-1);

	message m;

	strcpy(m.payload, "Hello, epta\n");


	int retval = msgnd(id, &m, sizeof(m.payload), 0);
	assert(retval!=-1);


return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <sys/ipc.h>
#include <assert.h>

struct mymsgbuf
{
	int mtype;
	char mtext[100];
}rec;

int main(){

	key_t key  = ftok("file.txt", 0);
			assert(key!=-1);

}

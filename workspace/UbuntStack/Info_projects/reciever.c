#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <sys/ipc.h>

int main() {
	char str[100];
	int i;

	key_t key  = ftok("/dev/null",1);
		assert(key!=-1);





	return 0;
}

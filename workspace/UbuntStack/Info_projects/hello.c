#include <stdio.h>
#include <unistd.h>
void main() {
	int i=0;
	sleep(2);
	for (i=0; i<10; i++)
		printf ("hello:%d\n", i*i);
}

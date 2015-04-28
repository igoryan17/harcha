#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

void* exe (char* arg) {
	assert (arg != NULL);
	int i=0;
	int count=-1;
	while (1) {
		if (arg[i]=='\0')
			break;
		if (arg[i]=='/') {
			count=i;
		}
		i++;
	}
	if (count<0) {
		printf("error: uncorrect way:%s\n", arg);
		return NULL;
	}
	//printf("name=%s\\0\n", arg0);
	//printf ("way=%s\n", way);
	if (execl(arg, &arg[count+1], (char*)NULL)<0){ //  int execl(const char *path, const char *arg, ...);
		printf("error execl\n");
	}
	return NULL;
}


int main(int argc, char* argv[]) {
	int i=0;
	assert (argc>1);
	int fork_res[argc-1];
	for (i=1; i<argc; i++) {
		fork_res[i]=fork();
		if (fork_res[i]>0) {
			waitpid(fork_res[i], 0);
		}
		if (fork_res[i]==0) {
			exe(argv[i]);
		}
	}
	return 0;
}




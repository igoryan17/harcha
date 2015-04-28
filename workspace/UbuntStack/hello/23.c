#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

//int main(int argc, char** argv)
int main()
{
/*
int a=open("./test.txt", O_RDWR);
close(a);
//printf("aleluja");
*/
char buf[228];
	int x=0, w=0, r;
	while ("w!==0"){
	x = open ("./test.txt", O_RDONLY);
	w = open ("./itog.txt", O_RDWR);
	r = read (x,buf,228);
			write(w,buf,r);
			printf("%s\n", buf);
			close(x);
			close(w);
				}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int sign(char c){
	if ( (c == '*') || (c == '/') || (c == '+') || (c == '-') )
		return 1;
	if (c == ' ')
		return -1;
	else
		return 0;
}

int main(){
	char c = '8';
	int x1=50;
	int x2=7;
	sign(c);
	printf("%d \n", sign(c) );
	return 0;
}

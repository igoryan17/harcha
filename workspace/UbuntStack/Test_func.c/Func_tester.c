#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int operation(char c, int x1, int x2) 	// +, -< *, / for x2 and x1
{
	int result;
			switch(c)
			{
			case '+' : result = (x1) + (x2);
			printf("%d %d in case +\n", x1, x2 );
			break;
			case '-' : result = (x2) - (x1);
			printf("%d %d in case -\n", x1, x2 );
			break;
			case '*' : result = (x1) * (x2);
			printf("%d %d in case *\n", x1, x2 );
			break;
			case '/' : result = (x2) / (x1);
			printf("%d %d in case /\n", x1, x2 );
			break;
			default : printf("error: unidentified symbol\n");
			break;
			}
			printf("result=%i\n", result);
			return result;



//push(result+'0');

/*for(j=0; j<2; j++){
					k = power(10,i);
					printf(" 0) c = %d, m = %d, k = %d\n\n", c, m, k);
					c = c*k;
					printf(" c = c*k :\n");
					printf(" 1) c = %d, m = %d, k = %d\n\n", c, m, k);
					l = c;
					printf(" l = l + c :\n");
					m = m + 1;
					printf(" 2) l = %d, m = %d, k = %d c = %d\n----\n", l, m, k, c);
				}
				push(l);
		printf(" 3) l = %d, m = %d, k = %d\n", l, m, k);
		break;

*/
}

int sign(char c){
	if ( (c == '*') || (c == '/') || (c == '+') || (c == '-') )
		return 1;
	if (c == ' ')
		return -1;
	else
		return 0;
}

int main(){
	char c = '+';
	int x1=50;
	int x2=7;
	sign(c);
	printf("%d \n", sign(c) );
	return 0;
}

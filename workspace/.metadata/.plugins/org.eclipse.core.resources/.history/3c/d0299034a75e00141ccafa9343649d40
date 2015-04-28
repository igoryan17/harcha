#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct stack {
	int value;
	struct stack* next;
} * head ;


void push(int c){ 			//запихать
	struct stack* temp = malloc(sizeof (struct stack) );
	printf("Push %d\n", c);
	(*temp).value = c;
	temp->next = head;
	head = temp;
	//printf("%p \n", head);
}

int pop (){ 				//извлечь верхний
		if (head == NULL)
		{
		printf("pop_func Error: if head == NULL, Pop returns E\n");
			return 'E';
		}
	struct stack* tmp = head;
	char temp = head->value;
	head = head->next;
	free(tmp);
	printf("Pop  %d\n", temp);
	return temp;
	}


int power(int a, int b) 	// a^b
{
	int i, p=a;
	if(b == 0)
		return 1;
	else
			{
			for(i=0; i<b-1; i++)
				{
					a=a*p;
					//printf("p = %d, a = %d\n", p, a);
				}
					//printf("returns a = %d\n", a);
	return a;
			}
}

int sign(char c){
	if ( (c == '*') || (c == '/') || (c == '+') || (c == '-') || (c == '^') )
		return 1;
	if (c == ' ')
		return -1;
	else
		return 0;
}

int operation(char symb, int x1, int x2) 	// +, -, *, / for x2 and x1
{
	int result;
			switch(symb)
			{
			case '^' : result = power(x2,x1);
			printf(" %d %d in case ^\n", x1, x2 );
			break;
			case '+' : result = (x1) + (x2);
			printf(" %d %d in case +\n", x1, x2 );
			break;
			case '-' : result = (x2) - (x1);
			printf(" %d %d in case -\n", x1, x2 );
			break;
			case '*' : result = (x1) * (x2);
			printf(" %d %d in case *\n", x1, x2 );
			break;
			case '/' : result = (x2) / (x1);
			printf(" %d %d in case /\n", x1, x2 );
			break;
			default : printf("oper_func error: unidentified symbol\n");
			break;
			}
			//printf("oper_func result=%i\n", result);
			return result;

}

int calc(char* str_in)
{
int v1, v2, result, i, j;
int  p, k, l, flag = 1;
char c;
l = 0;
int n = strlen ( str_in );
	for( i=0; i<n; i++)
	{
		c = str_in[i];
		//printf(" 0) c - '0' = %i \n", c - '0');
		p = sign(c); 		//p = 1 => symb, p = -1 => ' ', p = 0 => digit
		if ( p == 1 )
					{
							printf("\n");
							v1 = pop() ;
							v2 = pop() ;
							printf(" v1 = %d, v2 = %d\n", v1, v2);
							result = operation(c, v1, v2) ;
							printf(" result = %i\n\n", result);
							push(result);
						}
		if ( p == 0)
		{
			c = c -'0';
			if (flag == 1)		//flag = 1 => prev symb is ' '
				{
					//printf(" 1) p = %d c = %d flag = %d\n", p, c, flag);
					push(c);
					flag = 0;
				}
			else				//flag != 1 => prev sym is digit
				{
					l = pop();
					c = l*10 + c;
						//printf(" 2) p = %d  l = %d c = %d\n", p, l, c);
					push(c);
				}
		}
		if ( p == -1 )
		{
			flag = 1;
			//printf(" 2) p = %d  flag = %d c = %d\n", p, flag, c);
			continue;
		}
	}
return pop(result);
}


int main(void) {
	int h = calc ("13 4  2 ^ - ");
	printf("\n Main result : %d \n", h );
	return 0;
}

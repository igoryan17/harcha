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
	printf("Push %c\n", c);
	(*temp).value = c;
	temp->next = head;
	head = temp;
	//printf("%p \n", head);
}

int pop (){ 				//извлечь верхний
		if (head == NULL)
		{
		printf("Error: if head == NULL, Pop returns E\n");
			return 'E';
		}
	struct stack* tmp = head;
	char temp = head->value;
	head = head->next;
	free(tmp);
	printf("Pop %c\n", temp);
	return temp;
	}


int power(int a, int b) 	// a^b
{
	int i;
	for(i=0; i<b; i++)
		a=a*a;

	return a;
}

int calc(char* str_in)
{
int x1, x2, result, i;
int c;
int n = strlen ( str_in );

for( i=0; i<n; i++)
{
	c = str_in[i];
	if (c == ' ')
			continue;
	if( isdigit(c) ) {
	push(c);
}
	else
	{
	x1 = pop();
	x2 = pop();
		switch(c)
		{
		case '+' : result = (x1 - '0') + (x2 - '0');
		printf("%c %c in case +\n", x1, x2 );
		break;
		case '-' : result = (x2 - '0') - (x1 - '0');
		printf("%c %c in case -\n", x1, x2 );
		break;
		case '*' : result = (x1 - '0') * (x2 - '0');
		printf("%c %c in case *\n", x1, x2 );
		break;
		case '/' : result = (x2 - '0') / (x1 - '0');
		printf("%c %c in case /\n", x1, x2 );
		break;
		default : printf("error: unidentified symbol\n");
		break;
		}
		push(result+'0');
		printf("result=%i\n", result);
	}
}
return pop(result);
}


int main(void) {
	//head = NULL;
	int h = calc ("3 3 * 5 - 2");
	//"3 3 * 5 - 2 /"

	printf("%c \n", h );
	return 0;

}

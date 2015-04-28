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

int operation(char symb, int x1, int x2) 	// +, -, *, / for x2 and x1
{
	int result;
			switch(symb)
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
			printf("function returns result=%i\n", result);
			return result;

}

int calc(char* str_in)
{
	int v1, v2, result, i;
	int c, m, k, l;
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
		v1 = pop() - '0';
		v2 = pop() - '0';
		//вычитаем '0' т.к. функция operation принимает int
		printf(" v1 = %d, v2 = %d\n", v1, v2);

		result = operation(c, v1, v2) + '0';
		printf(" result + '0' = %i\n", result);
		//прибавляем '0' т.к. функция operation вернула int, а пушим char
			push(result);
			//printf("result=%i\n", result);
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

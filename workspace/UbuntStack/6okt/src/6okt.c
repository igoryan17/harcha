/*
 ============================================================================
 Name        : 6okt.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct stack {
	char value;
	struct stack* next;



} * head ;


void push(char c){
	struct stack* temp = malloc(sizeof (struct stack) );
	(*temp).value = c;
	temp->next = head;
	head = temp;
}

char pop (){
	if (head == NULL)
			return '-';
	struct stack* tmp = head;
	char temp = head->value;
	head = head->next;
	free(tmp);
	return temp;
	}

int main(void) {
	head = NULL;
	push('1');
	push('2');
	push('3');
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	return 0;

}

#ifndef STACK_H
#define STACK_H

typedef int data_t;

#define STACK_SIZE 1000

typedef struct{
        //unsigned int STACK_SIZE;
        data_t data[STACK_SIZE];
        //elemen_t data[STACK_SIZE];
        int count; // top element number

        data_t* head; // point to int (includes adress of parametr)
} Stack ;

int             push    (Stack* s, data_t D);//push a new element onto the top of the stack
data_t          pop     (Stack* s);//remove and return the element at the top of the stack.
data_t          top     (Stack* s);//Returns the element currently at the top of the stack, or null if the stack is empty.

#endif // STACK_H



#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

void pushtest (Stack* stack_name) {
    int i;
    stack_name -> count = 0;
            for (i=0; i< 1002; i++) {
            int res = push(stack_name, i);
            printf ("Push func returned %d\nPushed %d\n", res, stack_name -> data[stack_name -> count - 1]);

                if (res == 0) {
                printf("TEST PASSED\n");
                }
                else if (res == -1) {
                printf("TEST PASSED, returned -1 after overflow\n");
                }
                else {
                printf("TEST FAILED\n");
                }
            }
        }


data_t poptest(Stack* stack_name) {
    data_t res = pop (stack_name);
    printf("Pop returns %d\n", res);
    return res;
}



int main() {
    Stack a;
    a.count = 0;
//STACK_SIZE = 1000;

//------------------------------------------------------------------------------------
//PUSH TEST
//pushtest (&a);
//------------------------------------------------------------------------------------
push(&a,5);
push(&a,7);
//------------------------------------------------------------------------------------
//POP TEST
poptest (&a);



return 0;
}


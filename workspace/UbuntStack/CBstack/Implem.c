/*
 * implement.c
 *
 *  Created on: 24 апр. 2015 г.
 *      Author: nikita
 */
#include "Stack.h"
#include <stdlib.h>

int push(Stack* S, data_t val)
{
    if ( S -> count == STACK_SIZE )
        return -1;

    S -> data [S -> count] = val;
    S -> count += 1;

    return 0;
}

data_t pop(Stack* S)
{
    if (S -> count == 0)
        return -1;

   data_t buff = S -> data [S -> count];

    S -> count -= 1;


    return buff;
}

/*data_t top(Stack* s)
{

}
*/


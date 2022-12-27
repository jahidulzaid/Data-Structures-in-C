

#include <stdio.h>
#include <stdlib.h>

#define StackSize 10

int count = 0;

//creating  a stack

struct stack{
    int items[StackSize];
    int top;
};

typedef struct stack stack1;

//creating a empty stack
void creatingEmptyStack(stack1 *s){
    s->top = -1;
}

//checking if the stack is full

int isFull(stack1 *s){
    if (s->top = StackSize -1)
        return 1;
    else
        return 0;
}
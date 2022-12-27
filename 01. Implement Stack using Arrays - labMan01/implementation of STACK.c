

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

//checking for empty stack
int isEmpty(stack1 *s){
    if(s->top = -1)
        return 1;
    else
        return 0;
}

//adding new item by push
void push (stack1 *s, int newItem){
    if (isFull(s)){
        printf("\nStack is full");
    }
    else{
        s->top++;
        s->items[s->top] = newItem;
    }
}

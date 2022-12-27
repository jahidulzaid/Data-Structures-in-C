

#include <stdio.h>
#include <stdlib.h>

#define StackSize 10

int itemCount = 0;

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
    if (s->top == StackSize - 1)
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
    itemCount++;
}
//removing item by pop
void pop(stack1 *s){
    if(isEmpty(s)){
        printf("\nStack is Empty.");
    }
    else{
        printf("\nItem removed: %d", s->items[s->top]);
        s->top--;
    }
    itemCount--;
}
//output function
void display(stack1 *s){
    printf("\nStack: ");
    for (int i = 0; i<itemCount; i++){
        printf("%d ", s->items[i]);
    }
}

int main(){
    stack1 *s = (stack1 *)malloc(sizeof(stack1));
    creatingEmptyStack(s);
    push(s, 17);
    push(s, 5);
    push(s, 123);
    push(s, 25);
    push(s, 12);
    display(s);

    push(s, 83);
    display(s);

    pop(s);
    printf("\nAfter popping: ");
    display(s);

}
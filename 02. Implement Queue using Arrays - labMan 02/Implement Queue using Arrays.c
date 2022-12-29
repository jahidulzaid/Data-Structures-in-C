#include <stdio.h>
#include <stdlib.h>
#define ArraySize 5

int queue[ArraySize];
int front = -1;
int rear = -1;

int isFull(int queue[ArraySize]){
    if (rear == ArraySize -1)
        return 1;
    else
        return 0;
}

void isEmpty (int queue[ArraySize]){
    
}

void enqueue(int itemToInsert){
    if (isFull(rear)){
        printf("\nOverflow.");
    }
    else if (rear ==-1 && front == -1){
        front = rear = 0;
        queue[rear]= itemToInsert;
    }
}

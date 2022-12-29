#include <stdio.h>
#include <stdlib.h>
#define ArraySize 5

int queue[ArraySize];
int front = -1;
int rear = -1;

int isFull(int lastRearValue){
    if (rear == ArraySize -1)
        return 1;
    else
        return 0;
}


void enqueue(int itemToInsert){
    if (rear == ArraySize-1){
        printf("\nOverflow");
    }
    else if (rear ==-1 && front == -1){
        front = rear = 0;
        queue[rear]= itemToInsert;
    }
    else{
        rear++;
        queue[rear]= itemToInsert;
    }
}

void display(int queue[ArraySize]){
      
}


int main(){
    enqueue(2);
}
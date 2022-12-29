#include <stdio.h>
#include <stdlib.h>
#define ArraySize 5

int queue[ArraySize];
int front = -1;
int rear = -1;


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

void  dequeue(){
    if (rear == -1 && front == -1){
        printf("\nUnderflow");
    }
    else if (front == rear){
        front = rear = -1;
    }
    else{
        printf("\nDeleted item: %d", queue[front] );
        front++;
    }
}


void display (){
    if ( front == -1 && rear == -1 ){
        printf("\nThe queue is empty.");
    }
    else{
        printf("\n");
        for (int i = front; i<=rear; i++){
            printf("%d ", queue[i]);
        }
    }
}   


int main(){
    
    enqueue(2);

    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);

    
    display();
    dequeue();
    dequeue();
    dequeue();


    display();
    
    return 0;
    }
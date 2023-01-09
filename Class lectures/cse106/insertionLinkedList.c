#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertAtBeginning(struct node **head, int newElement){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newElement;
    newNode->next = *head;
    *head = newNode;
}

// void insertAtEnd(struct node **head, int newElement){
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     struct node *ptr;
//     if(*head == NULL){
//         *head = newNode;
//         return;
//     }
//     //inserting new value
//     newNode->data = newElement;
//     newNode->next = NULL;
//     //traversing the link
//     ptr = *head;
//     while(ptr->next != NULL){
//         ptr=ptr->next;
//     }
//     ptr->next=newNode;
//     return;
// }
void insertAtEnd2(struct node **head, int dataToInsert){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *ptr;
    //checking if there's any list
    if (*head == NULL){
        *head = newNode;
    return;
    }
    //assiging new data
    newNode->data = dataToInsert;
    newNode->next = NULL;
    //traversing the list
    ptr = *head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    return;
}






void display(struct node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}


void main(){
    struct  node *head;
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 5);
    insertAtEnd2(&head, 0);
    insertAtEnd2(&head, 0);

    printf("linked list: ");
    display(head);

}



/*
void insertAtBeginning(struct Node** head_ref, int new_element) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_element;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
*/
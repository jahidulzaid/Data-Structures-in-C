#include <stdio.h>
#include <stdlib.h>

// Linked list operations in C
// Jahidul Islam
// 221002504

struct Node {
  int data;
  struct Node* next;
};
void insertAtBeginning(struct Node** head_ref, int new_element) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_element;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void insertAtEnd(struct Node** head_ref, int new_element) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref;
  new_node->data = new_element;
  new_node->next = NULL;
  if (*head_ref == NULL) {
    *head_ref = new_node;
    return;
  }
  while (last->next != NULL){
    last = last->next;
  }
  last->next = new_node;
  return;
}
void insertAfter(struct Node* prev_node, int new_element) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_element;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}
void deleteNode(struct Node **head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}
int searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}
void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    index = current->next;
    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}
void display(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}
int main() {
  struct Node* head = NULL;

  
  insertAtBeginning(&head, 30);
  insertAtBeginning(&head, 20);
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 40);
  insertAfter(head->next, 50);

  printf("Linked list: ");
  display(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 50);
  display(head); 

  //sortLinkedList(&head);
  //printf("\nSorted List: ");
  //display(head);

}
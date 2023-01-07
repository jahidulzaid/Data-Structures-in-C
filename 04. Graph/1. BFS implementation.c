#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NODES 100

typedef struct node {
  int value;
  struct node *children[MAX_NODES];
  int num_children;
} Node;

typedef struct queue {
  Node *nodes[MAX_NODES];
  int head;
  int tail;
} Queue;

// function prototypes
Node *bfs(Node *root, int target);
void enqueue(Queue *queue, Node *node);
Node *dequeue(Queue *queue);

int main(void) {
  // build the graph or tree to be searched
  // ...

  // search for the target value
  Node *result = bfs(root, target);

  if (result) {
    printf("Target found!\n");
  } else {
    printf("Target not found.\n");
  }

  return 0;
}

Node *bfs(Node *root, int target) {
  // create a queue to store nodes to be visited
  Queue queue;
  queue.head = 0;
  queue.tail = 0;

  // create a set to store visited nodes
  bool visited[MAX_NODES];
  for (int i = 0; i < MAX_NODES; i++) {
    visited[i] = false;
  }

  // add the root node to the queue
  enqueue(&queue, root);

  // while the queue is not empty
  while (queue.head != queue.tail) {
    // remove the first node from the queue
    Node *node = dequeue(&queue);

    // if the node has not been visited
    if (!visited[node->value]) {
      // if the node contains the target value, return the node
      if (node->value == target) {
        return node;
      }

      // mark the node as visited
      visited[node->value] = true;

      // add the node's children to the queue
      for (int i = 0; i < node->num_children; i++) {
        enqueue(&queue, node->children[i]);
      }
    }
  }

  // if the target was not found, return NULL
  return NULL;
}

void enqueue(Queue *queue, Node *node) {
  queue->nodes[queue->tail] = node;
  queue->tail = (queue->tail + 1) % MAX_NODES;
}

Node *dequeue(Queue *queue) {
  Node *node = queue->nodes[queue->head];
  queue->head = (queue->head + 1) % MAX_NODES;
  return node;
}

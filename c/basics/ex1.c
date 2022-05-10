#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    int data;
    struct Node * next;
    
};

struct Node *head;
struct Node * createNode(int data);
void display(struct Node *head);
int countNodes(struct Node *head);
struct Node * insert(struct Node *head, int data);
struct Node * insertAtBegin(struct Node *head, int data);
struct Node * insertAtEnd(struct Node *head, int data);
struct Node * insertAtPosition(struct Node * head, int data, int pos);
struct Node * deleteBegin(struct Node * head);
struct Node * deleteEnd(struct Node * head);
struct Node * deletePosition(struct Node * head);
struct Node * updateBegin(struct Node * head, int data);
struct Node * updateEnd(struct Node * head, int data);
struct Node * updatePosition(struct Node * head, int pos);
struct Node * merge(struct Node *head1, struct Node *head2);
int main(){
    head = NULL;
    struct Node *node;
    node = createNode(12);
    printf("node->data: %d ", node->data);
    head = node;
    return 0;
}

struct Node * createNode(int data)
{
    struct Node *node;
    node = (struct Node *) malloc(sizeof(struct Node));
    if (node == NULL)
    {
        printf("Memory Node Allocated!!!");
        return NULL;
    }

    node->data = data;
    node->next = NULL;
    return node;
}

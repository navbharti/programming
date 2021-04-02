```c
#include <stdio.h>
#include<stdlib.h>
//node structure definition
struct node 
{
    int data;
    struct node *next;
};

//insert_begin()
struct node * insert_begin(struct node *head, int data)
{
    //1. check SLL is empty
    if(head == NULL)
    {
        head = (struct node*) malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        return head;
    }
    //2. create new node
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    
    //3. change new node pointer
    n->next = head;
    
    //4. change head pointer
    head = n;
    
    //5. return head
    return head;
}

//display function
void display(struct node *head)
{
    //1. check for SLL is empty
    if(head == NULL)
    {
        printf("\nSLL is empty");
        
        return;
    }
    //2. create temp pointer
    struct node *temp;
    //3. point temp to head node
    temp = head;
    //4. iterate all the nodes
    printf("\nSLL: ");
    while(temp!=NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head;
    head = NULL;
    /*struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = 10;
    n->next = NULL;
    
    head  = n; */
    
    head = insert_begin(head, 20);
    display(head);
    head = insert_begin(head, 50);
    display(head);
    head = insert_begin(head, 70);
    display(head);
    head = insert_begin(head, 5);
    display(head);
    return 0;
}

```
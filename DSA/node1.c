#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
void display_node(struct node new_node)
{
    printf("\nNode Data: %d",new_node.data);
}
struct node* create_node(int data)
{
    /* data */
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next = NULL;
    return new_node;
};

int main()
{
    struct node *new_node;
    new_node = create_node(10);
    display_node(new_node);
}
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node node1;
    node1.data = 100;
    node1.next=NULL;
    printf("\nNode: %d", node1.data);

    return 0;
}
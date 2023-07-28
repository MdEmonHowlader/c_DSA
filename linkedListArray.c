#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head;


void print()
{
    struct node *t;
    t = head;
    while (t != NULL)
    {
       printf("%d->",t->data);
        t = t->link;
    }
    printf("NULL\n");
}
int main()
{
    int arr[5] = {5, 6, 7, 8, 9};
    struct node *temp = NULL, *current = NULL;
    head = NULL;
    for (int i = 0; i < 5; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->link = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->link = temp;
            current = current->link;
        }
    }
    print();
}

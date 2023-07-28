#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};

int main()
{
    struct Node *head, *middle, *last;
    head = NULL;
    middle = NULL;
    last = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    middle = (struct Node*)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    head->data = 50;
    head->link = middle;
    middle->data = 10;
    middle->link = last;
    last->data = 49;
    last->link = NULL;
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->link;
    }
    printf("NULL\n");

    return 0;
}
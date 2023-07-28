#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head;

struct node *creatLinkedList(int arr[],int size){
 struct node *temp = NULL, *current = NULL;
    head = NULL;
    for (int i = 0; i < size; i++)
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
    return head;
}

void insertAtBeg(struct node *head,int value){
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->data = value;
   newNode->link = head;
   struct node* newHead = newNode;
   struct node* current = newHead;
   displayList(current); 
}
void insertAtLast(struct node *head,int value){
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->data = value;
   newNode->link = NULL;
   struct node *current = head;
   while(current->link !=NULL){
    current = current->link;
   }
   current->link = newNode;
    displayList(head);

}

void displayList(struct node* head)
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
    head = creatLinkedList(arr,5);
   
    displayList(head);
    //insertAtBeg(head,30);
    insertAtLast(head,222);
   
}

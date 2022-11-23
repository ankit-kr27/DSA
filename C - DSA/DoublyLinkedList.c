#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head, *new, *ptr;

void display()
{
    ptr = head;
    printf("\nData in the linked list are : \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void creation(int n)
{
    head = (struct node*)malloc(sizeof(struct node*));
    printf("\nEnter data in the linked list : ");
    scanf("%d", &head->data);
    head->prev = NULL;
    ptr = head;

    for(int i = 1; i < n; i++)
    {
        new = (struct node*)malloc(sizeof(struct node*));
        scanf("%d", &new->data);
        ptr->next = new;
        new->prev = ptr;
        ptr = new;
    }
    ptr->next = NULL;
}

int main()
{
    printf("\nEnter the length of the doubly linked list : ");
    int n;
    scanf("%d", &n);

    creation(n);
    display();
    return 0;
}
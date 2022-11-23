#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head, *ptr, *new;

void display()
{
    ptr = head;
    printf("\nThe data in the circular linked list are : %d", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("  %d", ptr->data);
        ptr = ptr->next;
    }
}

void creation(int n)
{
    head = (struct node *)malloc(sizeof(struct node *));
    ptr = head;
    printf("\nEnter data in the circular linked list : ");
    scanf("%d", &head->data);
    for(int i = 1; i < n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &new->data);
        ptr->next = new;
        ptr = new;
    }
    ptr->next = head;
}

int main()
{
    printf("\nEnter the size of the circular linked list : ");
    int n;
    scanf("%d", &n);
    creation(n);
    display();
    return 0;
}
// Program to create a linked list and perform creation, insertion(beg, mid, and end), deletion(beg, mid, end), search.

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head, *ptr, *new;

void creation(int n)
{
    ptr = (struct node *)malloc(sizeof(struct node *));     // malloc returns a void memory location of the mentioned size and then it is explicitly typecasted as above.
    head = ptr;     // head is for keeping track of the beginning of the start of the linked list
    printf("\nEnter the data : ");
    scanf("%d", &ptr->data);
    ptr->link = NULL;
    n--;
    do{
        new = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &new->data);
        new->link = NULL;
        ptr->link = new;
        ptr = ptr->link;
        n--;
    }while(n>0);
    ptr = head;
}

void display(struct node *hdisp)
{
    ptr = hdisp;
    printf("\n");
    while (ptr->link != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
    printf(" %d", ptr->data);
}

struct node* split(struct node *head1, int x)
{
    struct node* head2;
    ptr = head1;
    for(int i = 1; i <= x; i++)
    {
        ptr = ptr->link;
    }
    head2 = ptr->link;
    ptr->link = NULL;
    return head2;
}

int main()
{
    printf("\nEnter the length of the linked list : ");
    int n;
    scanf("%d", &n);
    creation(n); 
    display(head);
    int x;
    printf("\nEnter the point of split : ");
    scanf("%d", &x);
    struct node *head2;
    head2 = split(head, x);
    display(head);
    display(head2);
    return 0;
}
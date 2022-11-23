#include<stdio.h>
#include<stdlib.h>

struct node{
    int cf;
    struct node *link;
}*head1, *head2, *head3, *new, *ptr;

void poly(struct node *head, int pl)
{
    ptr = head;
    if(pl==1||pl==2)
    {
        printf("\nEnter the coefficients of the %dth polynomial : ", pl);
        scanf("%d", &ptr->cf);
    }
    for(int i = 2; i <= 4; i++)
    {
        new = (struct node*)malloc(sizeof(struct node*));
        if(pl==1||pl==2){scanf("%d", &new->cf);}
        ptr->link = new;
        ptr = ptr->link;
    }
    ptr = head;
}

void polyAdd()
{
    struct node *t1 = head1, *t2 = head2, *t3 = head3;
    for(int i = 1; i <= 4; i++)
    {
        t3->cf = t1->cf + t2->cf;
        t1 = t1->link;
        t2 = t2->link;
        t3 = t3->link;
    }
    t3 = head3;
    int a[4];
    for(int i = 0; i < 4; i++)
    {
        a[i] = t3->cf;
        t3 = t3->link;
    }
    printf("\nThe resultant polynomial is : %dx + %dy + %dz + %d = 0", a[0], a[1], a[2], a[3]);
}

int main()
{
    head1 = (struct node*)malloc(sizeof(struct node*));
    head2 = (struct node*)malloc(sizeof(struct node*));
    head3 = (struct node*)malloc(sizeof(struct node*));
    head1->link = NULL;
    head2->link = NULL; 
    head3->link = NULL; 
    printf("\nPolynomial is of the form : ax + by + cz + d = 0\n");

    poly(head1, 1);
    poly(head2, 2);
    poly(head3, 3);

    polyAdd();

}
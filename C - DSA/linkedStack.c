// Implementing stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *head = NULL, *temp, *top = NULL, *ptr;

void push(int val)
{
    temp = (struct stack *)malloc(sizeof(struct stack *));
    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        top = temp;
    }
    else
    {
        top->next = temp;
        top = temp;
        top->next = NULL;
    }
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow!");
    }
    else
    {
        ptr = head;
        int val = top->data;
        while (ptr->next != NULL && ptr->next->next != NULL )
            ptr = ptr->next;
        ptr->next = NULL;
        free(top);
        top = ptr;
        return val;
    }
}

void traverse()
{
    ptr = head;
    printf("\nThe elements in the stack are : ");
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    while (__GCC_ATOMIC_TEST_AND_SET_TRUEVAL)
    {
        printf("\nChoose among the following stack operations:-\n1. Push\n2. Pop\n3. Traverse\n4. End program\nChoice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int x;
            printf("\nEnter the value to be pushed: ");
            scanf("%d", &x);
            push(x);
            break;
        }
        case 2:
        {
            int pv = pop();
            printf("\nPopped value: %d", pv);
            break;
        }
        case 3:
            traverse();
            break;
        case 4:
            return 0;
        default:
            printf("\nEnter a valid choice !");
        }
    }
    return 0;
}
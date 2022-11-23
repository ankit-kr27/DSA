// Perform the array operations of creation, insertion by position and and value, deletion by position and value, search and update, display, and exit.

#include <stdio.h>
int arr[1000];

void creation(int n)
{
    printf("\nEnter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void insertionPos(int *n, int pos, int value)
{
    for (int i = *n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    (*n)++;
}

void insertionVal(int *n, int val1, int val2)
{
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] == val1)
        {
            int pos = i;
            for (int j = *n - 1; j >= pos; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[pos] = val2;
            (*n)++;
            i++;
        }
    }
}

void deletionPos(int *n, int pos)
{
    for (int i = pos; i < *n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void deletionVal(int *n, int val)
{
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] == val)
        {
            for (int j = i; j < *n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            i--;
        }
    }
}

void search(int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("\nNo. found at %dth index\n", i);
            return;
        }
    }
}

void display(int n)
{
    printf("\nThe array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
        int n;
        
        printf("\nEnter the size of the array : ");
        scanf("%d", &n);
        creation(n);

    while (1)
    {
        printf("\nChoose from the following array operations :-\n1. Insertion by position.\n2. Insertion by value.\n3. Deletion by position.\n4. Deletion by value\n5. Search element\n6. Update array.\n7. Display array\n8. Exit\nChoice : ");

        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nYour choice is insertion by position.\nEnter the position and the replacing value : ");
            int pos, val;
            scanf("%d%d", &pos, &val);
            insertionPos(&n, pos, val);
            break;
        }
        case 2:
        {
            printf("\nYour choice is insertion by value.\nEnter the value to be replaced and the replacing value : ");
            int val1, val2;
            scanf("%d%d", &val1, &val2);
            insertionVal(&n, val1, val2);
            break;
        }
        case 3:
        {
            printf("\nYour choice is deletion by position.\nEnter position of the element to be deleted : ");
            int pos;
            scanf("%d", &pos);
            deletionPos(&n, pos);
            break;
        }
        case 4:
        {
            printf("\nYour choice is deletion by value\nEnter the value : ");
            int val;
            scanf("%d", &val);
            deletionVal(&n, val);
            break;
        }
        case 5:
        {
            printf("\nYour choice is Searching an element\nEnter the value to be searched : ");
            int val;
            scanf("%d", &val);
            search(n, val);
            break;
        }
        case 6:
        {
            printf("Your choice is to update the array : \nEnter the size of the array : ");
            scanf("%d", &n);
            creation(n);
            break;
        }
        case 7:
        {
            printf("Your choice is to display the elements of the array : \n");
            display(n);
            break;
        }
        case 8 : return 0;
        default:
        {
            printf("\nInvalid Input\n");
        }
        }
    }
    return 0;
}
// Program to insert an element in an ordered list(sorted list)

#include<stdio.h>

int arr[100];

void insert(int *a, int *n, int x){
    int pos;
    for(int i=1; i<*n; i++)
    {
        if(x>=a[i-1] && x<=a[i])
        {
            for(int j=*n-1; j>=i; j--)
            {
                a[j+1] = a[j];
                pos = j;
            }
            a[pos] = x;
            break;
        }
    }
    *n++;
    return;
}

int main()
{
    int n, x;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    printf("\nEnter ordered list elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to be inserted : ");
    scanf("%d", &x);
    insert(arr , &n, x);
    printf("\nAltered ordered list : ");
    for(int i =0;  i<n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}
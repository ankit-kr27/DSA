// An Array A contains 25 positive integers. Write a C program which
// A.finds all pairs of elements whose sum is 25.
// B.finds the number EVNUM of elements of A which are even and the number ODNUM of elements of A which are odd

#include<stdio.h>

void pairSum(int *a, int n, int s)
{
    int flag = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i]+a[j] == s)
            {
                flag = 1;
                printf("\nPair : (%d, %d)", i, j);
            }
        }
    }
    if(flag == 0)
    {
        printf("\nNo pairs found");
    }
}
int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter array elements : ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int s;
    printf("\nEnter the pair sum : ");
    scanf("%d", &s);
    pairSum(arr, n, s);
    return 0;
}
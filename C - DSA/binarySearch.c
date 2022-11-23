// Program to implement binary search.

#include<stdio.h>
void bSearch(int arr[], int n, int s)
{
    int start = 0, end = n-1, mid;
    while (start <= end)
    {
        mid = (start + end)/2;
        if(arr[mid] == s)
        {
            printf("No. found at the %dth index", mid);
            break;
        }
        else{
            if(s > arr[mid]){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        
    }
    
}

int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter array elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s;
    printf("\nEnter the number to be searched : ");
    scanf("%d", &s);
    bSearch(arr, n, s);
    return 0;

}
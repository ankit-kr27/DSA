#include<stdio.h>
int oddCnt(int arr[], int n)
{
    int cnt =0;
    for(int i =0; i <n ; i++)
    {
        if(arr[i]%2!=0)
            cnt++;
    }
    return cnt;
}

int evenCnt(int arr[], int n)
{
    int cnt =0;
    for(int i =0; i <n ; i++)
    {
        if(arr[i]%2==0)
            cnt++;
    }
    return cnt;
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
    int oddcount, evencount;
    oddcount = oddCnt(arr, n);
    evencount = evenCnt(arr, n);
    printf("\nOdd count : %d\nEven count : %d", oddcount, evencount);
    return 0;
}
// Program to implement linear search

#include<stdio.h>
void lsearch(int arr[], int n, int s)
{
    int flag = 0;
   for(int i = 0; i < n; i++)
   {
        if(arr[i] == s)
        {
            flag++;
        }
   } 
   if(flag == 0)
   {
        printf("\nThe number is not found");
   }
   else{
        printf("\nThe number found %d times in the array", flag);
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
    lsearch(arr, n, s);
    return 0;
}
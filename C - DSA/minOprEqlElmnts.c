// Chef has an array A of length N. In one operation, Chef can choose any two distinct indices i,j(1≤i,j≤N,i!=j) and either change Ai to Aj or change Aj to Ai.Find the minimum number of operations required to make all the elements of the array equal.

// Input Format1lo llll;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  :-
// •First line will containT, number of test cases. Then the test cases follow.
// •First line of each test case consists of an integer N-denoting the size of array A.
// •Second line of each test case consists of N space-separated integers A1,A2,...,A N-denoting the arrayA.

#include<stdio.h>

int maxm(int arr[], int n)
{
    int mx = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > mx)
            mx = arr[i];
    return mx;
}

int minOps(int arr[], int n)
{
    int max = maxm(arr, n);
    int hash[max+1];
    for(int i = 0; i < max+1; i++)
        hash[i] = 0;

    for(int i = 0; i < n; i++)
        hash[arr[i]]+=1;
    int cnt = 0;
    cnt = maxm(hash, max+1);
    return n-cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i =0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", minOps(arr, n));
    }
    return 0;
}
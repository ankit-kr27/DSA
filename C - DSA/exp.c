// #include<stdio.h>

// int arr1[5][5];

// void input(int m, int n, int *arr[n])
// {
//     for(int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }

// int main()
// {
//     int m, n;
//     printf("Enter m, n : ");
//     scanf("%d%d", &m, &n);
//     input(m, n, arr1);

//     for(int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             printf("    %d  ", arr1[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str[100];
//     // str = "Ankit kumar";
//     gets(str);
//     printf("%s", str);
//     printf("%d", strlen(str));
// }

// #include<stdio.h>
// int call(int);
// int main()
// {
//     int z, num = 1;
//     z = call(num);
//     printf("%d", z);
//     return 0;
// }
// int call(int num)
// {
//     int y = 1, x = 1;
//     if(num<4)
//     {
//         x=3*x+num;
//         y = call(x+1) + 2 + call(x+3);
//     }
//     return y;
// }

// #include<stdio.h>
// int main()
// {
//     int *iptr;
//     int i, arr[2][2] = {10, 11, 12, 13};
//     iptr = *arr;
//     printf("%d", *(iptr+2));
//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[5][7] = {
                    1,1,1,1,1,1,1,
                    0,0,0,0,1,1,1,
                    1,1,0,0,1,1,1,
                    1,1,0,0,0,1,1,
                    1,1,1,1,0,1,1,
                    };
    arr[1][0] = 2;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(arr[i][j]==0&&(arr[i+1][j]==2||arr[i-1][j]==2||arr[i][j+1]==2||arr[i][j-1]==2))
            {
                arr[i][j] = 2;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}
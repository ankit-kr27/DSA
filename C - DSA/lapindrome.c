#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str[100];
        scanf("%s", &str);
        int flag = 1, l = strlen(str);
        
        if(flag == 0){printf("NO");}
        else{printf("YES");}
    }
    return 0;
}
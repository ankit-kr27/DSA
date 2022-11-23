// Implementing stack using array

#include <stdio.h>
#include <stdbool.h>

int arr[10], top = -1;

void push(int num)
{
    top++;
    arr[top] = num;
}

int pop(){
    int p = arr[top];
    top--;
    return p;
}

int main()
{
    int choice;
    while (true)
    {
        system("");
        printf("\nEnter your choice :- \n1. Push\n2. Pop\n3. Display\n4. Exit\n\nChoice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: {
                if(top >= 10){printf("\n! Stack Overflow");}
                else{
                    printf("\nEnter the number to be pushed : ");
                    int temp;
                    scanf("%d", &temp);
                    push(temp);
                }
                break;
            }
            case 2: {
                if(top <= -1){printf("\nStack Underflow");}
                else{
                    int p;
                    p = pop();
                    printf("%d", p);
                }
                break;
            }
            case 3: {
                if(top <= -1){printf("\nStack is empty!");}
                else{
                    printf("\nElements in the stack are : ");
                    for(int i = 0; i <= top; i++)
                    {
                        printf("%d  ", arr[i]);
                    }
                }
                break;
            }
            case 4: return 0;
        }
    }
    return 0;
}
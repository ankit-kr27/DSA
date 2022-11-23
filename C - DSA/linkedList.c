// Program to create a linked list and perform insertion(beg, mid, and end), deletion(beg, mid, end), search.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *head, *ptr, *new;
void display(){
    while (ptr->link != NULL){
        printf("%d  ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d  ", ptr->data);
    ptr = head;
}

void creation(int n){
    ptr = (struct node *)malloc(sizeof(struct node *)); // malloc returns a void memory location of the mentioned size and then it is explicitly typecasted as above.
    head = ptr;                                         // head is for keeping track of the beginning of the start of the linked list
    printf("\nEnter the data : ");
    scanf("%d", &ptr->data);
    ptr->link = NULL;
    n--;
    do{
        new = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &new->data);
        new->link = NULL;
        ptr->link = new;
        ptr = ptr->link;
        n--;
    } while (n > 0);
    ptr = head;
    display();
}
void insertBeg(int val){
    new = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter the data : ");
    scanf("%d", &new->data);
    new->link = head;
    head = new;
    ptr = head;
    display();
}
void insertionMid(int pos, int val){
    new = (struct node *)malloc(sizeof(struct node *));
    new->data = val;
    for(int i = 1; i < pos; i++){
        ptr = ptr->link;
    }
    new->link = ptr->link;
    ptr->link = new;
    ptr = head;
    display();
}
void insertionEnd(int val){
    new = (struct node *)malloc(sizeof(struct node *));
    new->data = val;
    while (ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = new;
    new->link = NULL;
    ptr = head;
    display();
}
void deleteBeg(){
    head = head->link;
    free(ptr);
    ptr = head;
    display();
}
void deleteMid(int n){
    int i = 1;
    struct node *ahead = head->link;
    while (i < n - 1){
        ptr = ptr->link;
        ahead = ahead->link;
        i++;
    }
    ptr->link = ptr->link->link;
    free(ahead);
    ptr = head;
    display();
}
void deleteEnd(){
    struct node *ahead = head->link;
    while (ptr->link->link != NULL){
        ptr = ptr->link;
        ahead = ahead->link;
    }
    ptr->link = NULL;
    free(ahead);
    ptr = head;
    display();
}
void search(int s){
    int flag = 0;
    do{
        if (ptr->data == s){
            flag = 1;
            break;
        }
        ptr = ptr->link;
    } while (ptr != NULL);
    // if (ptr->link == NULL && ptr->data == s){
    //     flag = 1;
    // }

    if (flag == 1){
        printf("\nNumber found");
    }
    else{
        printf("\nNumber not found");
    }
    ptr = head;
}
int main(){
    printf("\nEnter the length of the linked list : ");
    int n;
    scanf("%d", &n);
    creation(n);
    while (1){
        printf("\nChose the operation you want to perform:-\n1. Insertion\n2. Deletion\n3. Search\n4. Display\n5. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice){
        case 1:{
            printf("\nEnter the position and the value to be inserted : ");
            int pos, val;
            scanf("%d%d", &pos, &val);
            if (pos == 1){
                insertBeg(val);
                n++;
            }
            else if (pos == n + 1){
                insertionEnd(val);
                n++;
            }
            else if (pos > 1 && pos <= n){
                insertionMid(pos, val);
                n++;
            }
            else
                printf("\nNot a valid position.");
            break;
        }
        case 2:{
            printf("\nEnter the postion of the node to be deleted : ");
            int pos;
            scanf("%d", &pos);
            if (pos == 1){
                deleteBeg();
                n--;
            }
            else if (pos == n){
                deleteEnd();
                n--;
            }
            else if (pos > 1 && pos < n){
                deleteMid(pos);
                n--;
            }
            else
                printf("\nNot a valid position.");
            break;
        }
        case 3:{
            printf("\nEnter the element to be searched : ");
            int val;
            search(val);
            break;
        }
        case 4:{
            printf("\nThe elements in the linked list are : \n");
            display();
            break;
        }
        case 5:{
            printf("\nExiting Program...");
            return 0;
        }
        }
    }
}
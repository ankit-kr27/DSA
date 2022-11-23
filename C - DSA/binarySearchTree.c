// Program to implement Binary search tree

#include<stdio.h>
#include<stdlib.h>

struct BST{
    struct BST *left;
    int data;
    struct BST *right;
}*root=NULL, *temp, *ptr;

void insertion(int n){
    temp = (struct BST*)malloc(sizeof(struct BST*));
    temp->data = n;
    if(root == NULL){
        root = temp;
    }
    else{
        ptr = root;
        while(__GCC_ATOMIC_TEST_AND_SET_TRUEVAL){
            if(n > ptr->data){
                if()
            }
        }
    }
}

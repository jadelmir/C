#include <stdio.h>
#include <stdlib.h>


typedef struct BST_NODE_T {
    int data ;
    struct BST_NODE_T *left, *right;
} BST ;

int greater( int val , BST *curr){
    if(curr == 0) return 0 ;
    int countLeft = greater(val ,curr->left);
    int countRight = greater(val ,curr ->right);
    if(curr -> data > val) return countRight + countLeft + 1 ;
    else return countRight + countLeft;
}

int main () {
int n ;
    BST *root = 0 ;
    while (1 == scanf("%d",&n)){
        BST *nb = malloc(sizeof(BST));
        nb -> data = n ;
        nb -> left = 0 ;
        nb -> right = 0 ;
        // put data into the binary search tree
        // search for the insertion location
        BST *curr = root ;
        BST *prev=0 ;
        while(curr != 0 ){
            prev = curr;
            if(n > curr -> data )curr = curr -> right ;
            else curr = curr -> left ;
        }
        // to point to prev node to the new one
        if (prev == 0) root = nb ;
        else{
            if (n>prev ->data) prev ->right = nb ;
            else prev->left =nb ;
        }
    }

printf("GREATER: %d",greater(10, root));
}
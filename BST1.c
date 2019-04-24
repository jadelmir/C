#include <stdio.h>
#include <stdlib.h>

typedef struct BST {
    int data ;
    struct BST *left,*right ;
}bst ;

int greater( int val , bst *curr){
    if(curr == 0) return 0 ;
    int countLeft = greater(val ,curr->left);
    int countRight = greater(val ,curr ->right);
    if(curr -> data > val) return countRight + countLeft + 1 ;
    else return countRight + countLeft;
}
int NwithRC(bst *curr){
    if(curr != 0) return 0 ;
    int leftSum = NwithRC(curr -> left);
    int RightSum = NwithRC(curr -> right);
    if(curr ->right != 0)return leftSum + RightSum + 1 ;
    return leftSum + RightSum;


}
int main () {

       int n;
    bst *root = 0;
    while (1 == scanf("%d",&n)){
        bst *nb = malloc(sizeof(bst));
        nb -> data = n ;
        nb -> left = 0;
        nb -> right =0;

        bst *curr = root ;
        bst *prev = 0;
        while (curr != 0 ){
             prev = curr;
            if(n > curr -> data )curr = curr -> right ;
            else curr = curr -> left ;
        }
        if (prev == 0) root = nb ;
        else{
            if (n>prev ->data) prev ->right = nb ;
            else prev->left =nb ;
        }

    } 

bst *brain =0 ;
// printf("GREATER: %d",greater(1, brain));
printf("Number of RIGHTs are : %d",NwithRC(root));



}
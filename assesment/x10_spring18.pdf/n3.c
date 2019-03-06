#include <stdio.h>
typedef struct NODE {
    int data;
    struct Node *next;
} node_t;

int addOdd(node_t *curr){
    int sum =0 ;
    while(curr != 0){
        if (curr ->data % 2 == 0 ) {
            sum = sum + curr -> data ;
        }
        curr = curr -> next;
    }
    
}
int main (){

}
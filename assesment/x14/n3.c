#include<stdio.h>

typedef struct NODE { int data;
struct NODE *next;
} node_t;
int main(){

}

int equal(node_t *curr){
    int count= 0;
    if(curr == 0) return ;
    node_t *prev = curr;
    curr = curr ->data;
    while (curr != 0){
        if((prev -> data) ==(curr ->data) ){
            count++;
        }
        prev = curr ;
        curr = curr ->next;
    }

}
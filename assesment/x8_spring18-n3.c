#include <stdio.h>

typedef struct NODE {
  int data ;
  struct NODE *next;
} node_t;

int  square (node_t *curr){
  int count= 0;
  if((curr == 0 ) return ;
  node_t *prev = curr ;
  curr = curr->next ;
  while(curr != 0){

    if(prev!=0 && prev -> data == (curr->data)*(curr->data))count++;
    prev = curr;
    curr = curr->next;
  }
  return count ;
}

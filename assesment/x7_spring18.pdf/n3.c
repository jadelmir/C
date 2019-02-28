#include <stdio.h>

typedef struct NODE {
  int data ;
  struct NODE *next;
} node_t;

void replace(node_t *curr){
  if (curr == 0 ) return ;
    node_t *prev = curr ;
    curr = curr -> next;
    while (curr != 0 ) {
      curr -> data = curr -> data - prev->data ;\
      prev = curr;
      curr = curr -> next;
    }


}
int main (){
  
}

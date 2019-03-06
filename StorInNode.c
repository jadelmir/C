#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
  int data;
  struct NODE *next;
}node_t;
void prt(node_t *curr){
  while (curr!=0) {
    printf("%d\n",curr -> data );
    curr = curr -> data;
  }
}

struct NODE x[100];
int main (){
  int n;

  node_t *head = 0;
  while(1==scanf("%d\n",&n )){

    // process new number

      //make a new node
      node_t *nb = malloc(sizeof(node_t));

        //put data into the node
          nb->data = n;
        //put data into the list
        nb->next =head;
        head = nb;
      }
      prt(head);
}

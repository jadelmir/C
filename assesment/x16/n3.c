void replace(node_t *curr){
  if (curr == 0) return;
  while(curr -> next != 0) {
    curr -> next-> data - curr -> data ;
    curr = curr -> next
  }
}

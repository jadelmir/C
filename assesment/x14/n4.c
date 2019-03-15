typedef struct BST_NODE_T {
  int data ;
  struct BST_NODE_T , *left, *right;
} BST;

int child2(BST *curr){
  if(curr == 0) return 0 ;
  int lcount = child2(curr -> left)
  int rcount = child2(curr -> right)

  if(curr -> left != 0 && curr -> right !=0) return lcount+rcount + 1;
  else lcount+rcount ;

}

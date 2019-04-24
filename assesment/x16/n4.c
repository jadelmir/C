int numLeaf(BST *curr){
  if(curr == 0 ) return 0;
  if(curr -> left == 0 && curr -> right == 0)return 1;
  return numLeaf(curr -> left)+ numLeaf (curr -> right);
}

int longest(bst_node_t *curr)
{
    if(curr == 0)return 0;
    int leftLongest = longest(curr -> left);
    int rightLongest = longest(curr -> right);
    if (leftLongest > rightLongest ) return 1+leftLongest;
    else return 1+rightLongest
}

int oddnum(node_t *curr){
    int count++;
    int sum = 0 ;
    while(curr != 0 ){
        if(((curr -> data )% 2 )== 1) count ++
        curr = curr -> next;
    }
    return count;

}
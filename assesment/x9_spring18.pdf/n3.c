typedef struct Node
{
    int data ;
    struct Node *next ;
}node_t ;

int null3 (node_t *curr){
    int count =0 ;
    while (curr != 0 ){
        if(((curr -> data )% 3) == 0)  {
            count++;
        }  

        curr = curr ->next ;

    }
    return count ;

}

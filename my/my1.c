#include <stdio.h>
int mystrlen(char *);
int main(){
    printf("number of character is %d\n",mystrlen("Cat"));
}

int mystrlen(char *s){
    // int count = 0;
    // while(*s++)count ++ ;
    // return count;
    
    char *s0 = s ; // the one exception the value in s is put into s0
    while(*s){s++;};


    
    
    return s-s0;
}
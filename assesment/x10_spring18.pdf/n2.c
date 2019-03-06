#include<stdio.h> 
int main (){
    int SpaceOccured = 0;
    int count=0;
    int c;
    int p = -1 ;
    while((c = getchar()) != EOF ){
        if(p == ' ' && c == 'A')count++;
        p=c ;
    }
    printf("number is %d\n",count);
}
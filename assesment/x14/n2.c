#include<stdio.h>

int main(){
    int count= 0;
    int c;
    while((c= getchar()) != EOF){
        if(c>='a' && c<= 'm'){
            count++;
        }
    }
    printf("the final count is %d",count);
}
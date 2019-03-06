#include<stdio.h>

int main(){
    int c ;
    int count =0 ;

    while((c=getchar())!=EOF){
        if(c == ',' || c == ':' || c == '.')count++;
    }
    printf("number of commas and periods , colons in the input is %d \n",count);
    
}
#include <stdio.h>

int high(int number){
    printf("we are here");
    int firstHigh = number ;
    int secondHigh = number << 16 ;
    int firstCount =0;
    int secoundCount = 0;
    for(int i = 0; i < 16; i++)
    {
        if((firstHigh&1)!= 0) firstCount++;
        if((secondHigh&1)!=0) secoundCount++;
    }
    if(firstCount > secoundCount) printf("First HIGH is bigger");
    else printf("Second High is bigger");
    return 0;

    // int n = 1 << 16;
    // int l =0 ;
    // int HigherBitCount=0;
    // for(int i = 0; i < 16; i++)
    // {
    //     if ((n&number )!=0) {
    //         HigherBitCount++;

    //     }
    //     n=number<<1;

        
        
    // }
    // if(h>l)return1;
    // return 0;
}

int main () {
    int n ;
    printf("enter a number ");
    scanf("%d",&n);
    high(n);
    return 0;
}
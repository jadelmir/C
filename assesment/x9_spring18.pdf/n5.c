#include <stdio.h>
int high1Low0(int n){
    int high = n << 16;
    int highCount = 0;
    int lowCount = 0;
    // int count = 0;
    for(int i = 0; i <= 16; i++)
    {
        if((high&1)==1) highCount++;
        if ((n&1)==0) lowCount++;
        n = n >> 1;
        high = high >> 1;
        
        /* code */
    }
    // count = highCount + lowCount ;

    // printf("the numbers are %d", highCount + lowCount);
    return highCount + lowCount ;
    
}

int main (){
    printf("enter a number");
    int n ;
    scanf("%d",&n);
    printf("NUMBER IS %d",high1Low0(n));
}
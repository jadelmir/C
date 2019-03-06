#include <stdio.h>

int high(int number){
    int n = 1 << 16;
    int l =0 ;
    int HigherBitCount=0;
    for(int i = 0; i < 15; i++)
    {
        if ((n&number )!=0) {
            HigherBitCount++;

        }
        n=number<<1;

        
        
    }
    if(h>l)return1;
    return 0;
}
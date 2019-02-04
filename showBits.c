#include <stdio.h>

int main (){
    char c = -118 ;
    unsigned char p = 128;
    for(int i = 0; i < 8; i++)
    {
        // printf("P = %d and C = %d  ",p,c);
        // printf(" P&C%d",p&c);
        // printf("\n");
        if((p&c) == 0 )printf("0");
        else printf("1");
        p=p/2;
    }
    printf("\n");
    
}
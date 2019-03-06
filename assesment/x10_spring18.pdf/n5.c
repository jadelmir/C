#include <stdio.h>

int main (){
    int mask = 7 ;
    int n; 
    int count =0 ;

    printf ("Enter a number ");
    scanf ("%d",&n);
    for(int i = 0; i < 29; i++)
    {
       if((n&mask) == 5 ) count++;
       n=n >>1 ;
    }
    printf("number of 101 is %d",count);
    
}
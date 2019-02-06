#include <stdio.h>
int count10(int);
int main(){
    int n ;
    scanf("%d",&n);
    // int CheckCount = count10(n); 
    printf("COUNT is %d",count10(n) );
}

// count every 1 and 0 bits
int count10(int n){
    int count =0 ;
    //because it's look like (111) in bits (000&111)=000 (010&&111)=010
     int mask= 7 ;
        for(int i = 0; i < 31; i++)
        {
            printf("In i = %d ",i);
            printf("N is = %d  and nmask is = to %d \n",n,n&mask);
            if((n&mask)==2)count++;  
            n= n>>1;
        }
  return count;
  
    
}
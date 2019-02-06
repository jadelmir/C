#include <stdio.h>

int checkBit(int,int);


int main(){
    int n ;
    int b = 10;
    scanf("%d",&n);
    for(int i = 31; i >= 0 ; i--)
    {
        if(checkBit(n,i)) printf("1");
        else printf("0");
  

    }
}
// returns true if b-th bit in n is 1 
// false otherwise 
// b = 0...31
int checkBit(int n , int b){
    int p=1<<b ;
    printf("for  i = %d we have had %d and P&N is %d \n",b,p,p&n );
    return p&n;

}

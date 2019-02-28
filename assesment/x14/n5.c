#include <stdio.h>

int opposites(int n){
    int sencondHalf = n >> 16;
    int firstHalf = n;
    int count =0;
    for(int i = 0; i < 16; i++)
    {
        if((firstHalf&1 )!= (sencondHalf&1)){
            count++;
        }else
        {
        };
        sencondHalf = sencondHalf >> 1 ;
        firstHalf =firstHalf >> 1;
        
        /* code */
    };
    return count;
    }
    
int main(){

    int number = 21;
    printf("opposites are %d ",opposites(number));

}

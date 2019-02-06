#include <stdio.h>
// count every 1 and 0 bits
int count10(int n){
    int count =0 ;
    //because it's look like (11) in bits (00&11)=00 (01&&11)=01
    int mask =2 ;

  for(int i = 0; i < 31; i++)
  {
    if((n&mask)==2)count++;  
    n= n>>1;
  }
  return count;
  
    
}
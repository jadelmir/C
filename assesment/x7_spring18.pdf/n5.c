#include <stdio.h>
int count101(int n){
    int mask = 7;
    int count =0;
    for(int i = 0; i < 29; i++)
  {
    if ((n&mask) == 5)count++;
    n=n>>1;
  }
  return count;

}
int main (){
    int number ;
    scanf("%d",&number);
    printf("the count of %d is %d",number,count101(number) );
}
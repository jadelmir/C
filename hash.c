#include <stdio.h>

long int hash(char *s){
  long int ans = 0;
  while(*s) ans = ans<< 1 ^ *s++;
  return ans;
}

int main(){
  printf("%ld\n",hash("JADOO") );
}

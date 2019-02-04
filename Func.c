#include <stdio.h>

int add3(int n){
  return n+3;
}

int main(int argc, char const *argv[]) {
  int x ;
  scanf("%d",&x );
  printf("%d\n",add3(x) );
  return 0;
}

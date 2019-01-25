#include <stdio.h>
// print out the numbers 1-10

int main(int argc, char const *argv[]) {
int x = 1 ;
  while (x <= 10) {
    printf("%2d%4d%6d\n",x,x+10,x+20 );
    x ++;
  }


return 0;
}

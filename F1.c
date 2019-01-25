#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("please enter the number of rows" );
  int R;
  scanf("%d\n",&R );
  for (int x = 0; x < R; x++) {
    printf("*");
  }
  return 0;
}

#include <stdio.h>
int main() {
  printf("please enter a small integer for number of rows:\n" );
  int R ;
  scanf("%d\n",&R );
  int numAst = 0;
// Loop over the big array to print the rows
  for (int i = 0; i <= R; i++) {
    // numAst is the amount of * we should be printing
    numAst = R - i;
    // loop over the columns
    for (int j = 1; j <= R; j++) {

      if (j <= numAst) {
        printf("*");

      }else{
  printf(" ");
      }

    }
    printf("\n" ); // for jumping down a row

  }
  return 0;
}

#include <stdio.h>
// count '.' ' '
int main() {
  printf("start of the program" );
  int c ; // is the curremt carracter
  int count =0 ;
  int p = 0;// is the previous carracter
  while ( (c=getchar()) != EOF) {
    if( c == ' ' && p == '.') count++;
    p = c;
  }
  printf("end of program" );
  printf("\n%d\n", count );
  // return 0;
}

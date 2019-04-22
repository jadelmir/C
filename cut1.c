// get input a character at a time
// wird is a bunch of letters.
//  hit a letter:accumulate that letter and the letters coming after unitil we hit a non-letter
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define FNAME "testCut"
#define SZ 1000

char strSpace[SZ];
char *top = strSpace;
//try to get next word; if successful return 1;
// else return a 0 ;
int next(FILE *f) {
  char *i = top;
  int c ;
    while( ( c = fgetc(f) ) != EOF ){
      if(isalpha(c)){
        //start storing the letters in strSpace;
        while(isalpha(c)){
        *i++ = c ;
        c= fgetc(f);
      }
      *i++ = 0;
      return 1 ;
      }

    }
    return 0;
}

void prtSS(int size){
  for (int i = 0; i < size; i++) {
    if(strSpace[i]!= 0)printf("%c",strSpace[i] );
    else printf("0");

    /* code */
  }
}

int main () {
  FILE *f = fopen(FNAME, "r");
  while( next(f) ){
    top += strlen(top)+1;
  }

  prtSS(50);

}

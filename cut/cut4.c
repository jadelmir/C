#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
//store each word just once; upper, lower case not important

#define FNAME  "shakespeare.txt"
#define SZ 200000
#define HTSZ  1009

typedef struct BOX {
  char *word;
  struct BOX *next;
} box;

box *table[HTSZ]; 

char strSpace[SZ];
char *top = strSpace; //top has the address of the first free space

int hash(char *s) {
  long ans=0;
  while (*s)
    ans = ans<<1 ^ *s++;
  return ans%HTSZ;
}


//try to get next word; if successful returns 1
//otherwise returns a 0
int next(FILE *f) {
  char *i = top;
  int c;
  while ( (c=fgetc(f)) != EOF) {
    if (isalpha(c)) {
       //start storing the letters in strSpace
       while( isalpha(c)) {
         c = toupper(c);
         *i++ = c;
         c = fgetc(f);
       }
       *i++ = 0;
       return 1;
    }
  }
  return 0;
}

void prtSS(int size) {
   for(int i=0; i<size; i++)
      if (strSpace[i] != 0)
         printf("%c", strSpace[i]);
      else
         printf("0");
  printf("\n");
}

//returns 1 if the current word at top is actually new
//returns 0 otherwise
int wordIsNew(char *top) {
  int h = hash(top);
  box *curr = table[h];
  while (curr) {
    if (strcmp(curr->word, top)==0) return 0;
    curr = curr->next;
  }
  box *nb = malloc(sizeof(box));
  nb->word=top;
  nb->next = table[h];
  table[h] = nb;
  return 1;

}

int main() {
  FILE *f = fopen(FNAME, "r");
  while (next(f)) {
    if ( wordIsNew(top) )    //only do the line below if the current word is new
    top += strlen(top)+1;
    if (top-strSpace+50>SZ) {printf("need more space\n"); return 1;} 
  }
  //find then number of entries in the (hash) table equal to 0.
  int zcount =0;
  for(int i=0; i<HTSZ; i++)
    if (table[i]==0) zcount++;
  printf("The number of null entries in the hash table = %d\n", zcount);

  longestListOccurs(top);
}












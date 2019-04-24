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
typedef struct BIGBOX {
  char *word;
  int count;
  struct BOX *next;
} bigBox;

box *table[HTSZ]; 

char strSpace[SZ];
char *top = strSpace; //top has the address of the first free space

//length of the list 
int linkedListLength(box *curr) {
  int len=0;
  while(curr!=0) {
    len++;
    curr = curr->next;
  }
  return len;
}

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

  int maxlen =0;
  for(int i=0; i<HTSZ; i++) {
     int len = linkedListLength(table[i]);
     if (len>maxlen) maxlen = len;
  }
  printf("the maximum length = %d\n", maxlen);


  // longest table 
  int longestSoFar = 0;
  char *longWord =0;
  for(int i = 0; i < HTSZ; i++)
  {
    box *curr = table[i];
    while(curr != 0){
      if(strlen(curr->word)>longestSoFar)
      {
        longestSoFar = strlen(curr -> word);
        longWord= curr -> word;
      }
      curr = curr -> next;
    }
    
  }
  
  // or other way to do it 
  int lengthoflongestSoFar = 0;
  char *longestWord = 0;
  for(char *i = strSpace; i < top; i+= strlen(i)+1)
  {
    if(strlen(i)>lengthoflongestSoFar){
      lengthoflongestSoFar = strlen(i);
      longestWord = i;
    }
    /* code */
  }
  printf('\n %s',longestWord);
  printf('\n %s',longWord);
  
  
}












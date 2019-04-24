#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SZ 200000 
#define FNAME "test.txt" 
#define HTSZ 1009
// store each word just once lower case upper case doesn't matter
typedef struct BOX {
    char *word;
    struct BOX *next;
} box ;

abox *table[HTSZ];

char strSpace[SZ];
char *top = strSpace ;//top has the address pf the first free space


int hash (char *s){
    long ans = 0; 
    while (*s)
        ans = ans << 1 ^ *s++;

    return ans%HTSZ;
}
// try to get the  next word ; if successful returns 1
// otherwise returns a 0
int next (FILE *f){
    char *i = top ;
    int c ;
    while ((c=fgetc(f) != EOF)){
        if(isalpha(c)){
            c=toupper(c);
            while(isalpha(c)){
                *i++ = c;
                c = fgetc(f);
            }
            *i++ = 0 ;
            return 1;
        }
    } 
    return 0 ;
}

void prtSS(int size){
    for(int i;i<size;i++)
        if(strSpace[i]!= 0 )
        printf("%c",strSpace[i]);
        else printf("0");

    printf("\n");
}
// return 1 if the new word at the top is new 
// return 0 
 int wordIsNew(char *top){
     int h = hash(top);
     box *curr = table[h];
     while(curr){
         if(strcmp(curr -> word ,top) == 0) return 0;
         else curr = curr->next;
     }
     box *nb = malloc(sizeof(box));
     nb -> word = top ;
     nb ->next = table[h];
     table[h]=nb;
     return 1 ;

}
// length of the list 
int linkedListLength (box *curr){
    int len =0 ;
    while (curr != 0 ) {
        len ++;
        curr = curr ->next;
    }
    return len;
}

int main(){
    FILE *f = fopen(FNAME, "r");
    while(next(f)){
        if(wordIsNew(top))
         top += strlen(top)+1;
         if(top - strSpace+50>SZ){
             printf("need more space");
             return 1 ;
         }
    }
    // find then number of entries in the hash table equal to 0 
    int zcount = 0;
    for(int i = 0; i < HTSZ; i++)
    {
        if(table[i]==0)zcount++;
    }
        printf("the number of nll entries in the hash table = %d\n",zcount);

        int maxlen = 0;
        for(int i = 0; i < HTSZ; i++)
        {
            int len = linkedListLength(table[i]);
            if(len> maxlen)maxlen = len ;
        }
        printf("the max is = %d\n",maxlen);
        
    
    prtSS(50);
}
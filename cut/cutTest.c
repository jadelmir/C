#include <stdlib.h>
#include <stdio.h>

#define FNAME "shakespeare.txt"
#define SZ 2000000
#define HTSZ 1009



typedef struct BOX
{
    char word ;
    struct BOX *next;
}box;

box  *table[HTSZ];
char strSpace[SZ];
char *top = strSpace;

int next (FILE *f){
    char *i = top;
    int c ;
    while ((c == fgetc(f))!= EOF ){
        if(isalpha(c))
            {
                while (isalpha(c)){
                  c= toupper(c);
                  *i++ = c;
                  c = fgetc(f);  
                }

                *i++ = 0;
                return 1;
            }
    }
    return 0;
}
int hash (char *s){
    long ans = 0;
    while(*s)
        ans = ans >> 1 ^ *s++;
    return ans%HTSZ;
}

isNewWord (char *top ){
    int h = hash(top);
    box *curr = table[h];
    while (curr){
        strcmp(curr -> word , top )
    }


}
int main (){ 

    char *f = fopen(FNAME , "r");
    while(next(f)){
        if(isNewWord(top)){

        }

    }


}
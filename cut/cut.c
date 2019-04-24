#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

#define FILENAME  "shakespeare.txt"
#define SZ 2000000
#define HTSZ 1009


typedef struct BOX {
    char *word ;
    struct BOX *next ;
}box; 
box  *table[HTSZ];
char strSpace[SZ];
char *top= strSpace;

int numOfSize[54];

int next (FILE *f ){
    char *i = top;
    int c ;
    while ((c =fgetc(f))!= EOF){
        if(isalpha(c)){
            while(isalpha(c)){
             c= toupper(c);
             *i++ = c ;
             c = fgetc(f);

            }
            *i++ =0 ;
            return 1;
        }
    }
        return 0;

}


int hash(char *s) {
  long ans=0;
  while (*s)
    ans = ans<<1 ^ *s++;
  return ans%HTSZ;
}



int isNewWorld (char *top){
    int h = hash(top);
    box *curr = table[h];
    while(curr){
        if(strcmp(top , curr ->word)==0) return 0;
        curr = curr ->next;
    }

    box *newBOX = malloc(sizeof(box));
    newBOX -> word = top;
    newBOX -> next = table[h];
    table[h]=newBOX;
    return 1;

}
int linkedListLength (box *curr){
    int count = 0;
    while (curr != 0){
        count++;
        curr = curr -> next;
    }
    return count;
}
char WordLength (box *curr){ 
    char max[] = "" ;
    while(curr != 0){
        // if(strlen(curr -> word) > strlen(max) )max = curr ->word;
        if(strcmp(curr -> word ,max )>0)strcpy(curr -> word , max);
        curr = curr -> next ;
    }
    return max;

}
void prtList(box *curr){
    while(curr != 0){
            printf("%s\n",curr->word);
            curr = curr ->next;
    }
    
}

int main (){

    FILE *f = fopen(FILENAME,"r");
    while(next(f)){
        if(isNewWorld(top))top+= strlen(top)+1;
        if(top-strSpace + 50 > SZ){printf("we need more space") ;return 1;}
    }

        int max = 0 ; int min = 0;
        char maxWordLen[]="";

      for(int i = 0; i < HTSZ; i++)
        {
            int len = linkedListLength(table[i]);
            if(len>max)max = len;
            else if (len<min)min = len;
            numOfSize[len] = numOfSize[len]+1;
            char wordMaxLen[] = WordLength(table[i]);
            if(strcmp(wordMaxLen, maxWordLen))
            if(strlen(wordMaxLen) > strlen(maxWordLen)) strcpy(wordMaxLen, maxWordLen);
            printf("the largest word is %s",maxWordLen);

            
        }
        for(int i = 0; i <= 52; i++)
        {
           printf("%d number in the size of %d \n",numOfSize[i],i);
        }

        int indexTHE = hash("THE");
       prtList(table[indexTHE]);

        
    


}
#define SZ [100]

int strSpace[SZ];

void prtSS(int size){
    for(int i = 0; i < size; i++)
    {
        if(strSpace[i] != 0) printf("%c",strSpace[i]);
        else printf("0");
    }
    printf("\n");
    
}


int wordIsNew(char *top){
    char *i = strSpace;
    while(i<top){
        if(strcmp(i,top))
    }
}
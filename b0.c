#include<stdio.h>
void prt (char ); // function declaration ;
int main(){
    // char Number ;
    // printf("Enter A Number");
    // scanf("%c",&Number);
    // prt(Number);
    prt(-117);
    prt(50);

}
void prt (char c){
    unsigned char p = 128 ;

    for(int i = 0; i < 8; i++)
    {
        if(p&c)printf("1");
        else printf("0");
        p=p/2;
        /* code */
    }
    printf("\n");
    

}

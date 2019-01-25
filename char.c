#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int numA = 0 ;
    while((c=getchar()) != EOF){
     if (c == 'A') numA++;
    }
    printf("%d\n",numA);

    



    return 0;
}

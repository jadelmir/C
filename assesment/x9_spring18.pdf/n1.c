#include<stdio.h>

int main (){
    printf("enter number of integer");
    int n ;
    scanf("%d",&n);

    int numberOfBs = 2*n+1;
    int numberOfCs=1;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j < numberOfBs; j++)
        {
            printf("B");
        }
        for(int k = 0; k < numberOfCs; k++)
        {
        printf("A");
        }

        numberOfBs-= 2 ;
        numberOfCs+=2;
        
    }
    
}
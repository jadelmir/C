#include<stdio.h>
int main (){

    int n ;
    int numA = 1 ;
     int numB = 0;

    scanf("%d",&n);
    numB = n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < numA; j++)
        {
            printf("A");
        }
        for(int k = 0; k < numB; k++)
        {
            printf("B");
        }
        printf("C");
        numA++;
        numB--;
        
    }
    
    

}
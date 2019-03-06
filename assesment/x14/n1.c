#include <stdio.h>

int main (){
    int n;
    printf("enter an integer n");
    scanf("%d",&n);
    

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("XO");
            /* code */
        }
        printf("B");
        /* code */
    }
    
}
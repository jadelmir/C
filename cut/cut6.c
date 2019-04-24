#include <stdio.h>

#define SZ 1000
#define FNAME "nums"
int a[SZ];
//searches a[0]...a[end] 
//returns the index of the max value
int findMaxIndex(int end){
    int ans =0 ;
    for(int i = 0; i <= end; i++)
    {
        if(a[i] > a[ans])ans = i;
    }
    return ans;
    
}

int main (){

    //fill the fist part of the array 
    // from some file of integers
    // a[0]... a[n-1] are filled 

    // file opened     
    FILE *f =fopen(FNAME , "r");
    int n=0;

    // loop over the file 
    // and store data in there array 
    while( 1==fscanf(f,"%d",a+n) )n++; 
    
    // sel sort 
    for(int i = n-1; i > 0; i--)
    {
        // find the biggest 
        int indexOfMax = findMaxIndex(i);
        int temp = a[i];
        a[i] = a[indexOfMax];
        a[indexOfMax]=temp;
        //swap with a[i]
    

    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}
#include <stdio.h>

int main(){
    int c;
    int count=0;
    while((c=getchar())!= EOF){
        if ((c >= 'A' && c <= 'F' )||(c >= 'T' && c <= 'Z')) {
            count++;
        }
        
    }
    printf("Count is %d",count);
    return 0;
    
}
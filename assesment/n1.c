#include<stdio.h>

int main() {
    int c ;
    int prev = -1;
    int count =0;
    while((c = getchar())!=EOF){
        if(prev == 't' && c == '.')count++;
        prev = c ;
    }
}



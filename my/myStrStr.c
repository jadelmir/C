#include <stdio.h>
#include <string.h>

char *myStrStr(const char *haystack , const char *needle){
    while(*haystack){
        printf("hayyyy %s \n",haystack);
        if (*haystack == *needle) {
            printf ("YEYEY");
            return (char *)haystack;
        }
        
        haystack++;
    }
return (char *)haystack;
}   

int main (){
    char a[100];
    strcpy(a,"dogCat");
    char *p = myStrStr(a,"C");
    *p = 'x';
    printf("p is %s",p);

}
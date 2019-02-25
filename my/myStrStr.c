#include <stdio.h>
#include <string.h>

char *myStrStr(const char *haystack , const char *needle){
    while(*haystack){
        char *what[10];
        if (*haystack == *needle) {
        strcpy(*what , haystack);

            while(*needle++ == *haystack++){
                printf("WOOOOPSSSSSSS %c \n",*needle );
                if(*needle == 0){printf("YEYYYYYY Result is %s\n" ,*what) ;
                 return *what;

                
                }
            }
        }
        
        haystack++;
    }
return (char *)haystack;
}   

int main (){
    char a[100];
    strcpy(a,"dogCat22");
    char *p = myStrStr(a,"Cat");
    // *p = 'x';
    printf("p is %c \n and his refrence is %s",*p,p);
    

}
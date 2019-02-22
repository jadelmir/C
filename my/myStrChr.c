#include <stdio.h>
#include <string.h>
// should return the first int or char found
char *myStrChar(const char *s,int c){



  return (char *)s;
}

int main(){
  char a[100];
  strcpy(a,"dogCat");
  char *p = myStrChar(a,'c');
  printf("%c\n",*p);
  *p = 'x';
  printf("%s\n",a);
}

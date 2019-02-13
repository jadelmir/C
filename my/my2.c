#include <stdio.h>

char *mystrcpy(char *,const char *);//prototype , decalaration

 int main() {
   char a[100]= "this is a bigger one";
      printf("%s\n",a );
   mystrcpy(a,"ouuuuuu");
   printf("%s\n",a );// print from the begining new address until it get the 0
  return 0;
}


char *mystrcpy(char *dest,const char *src){
char *dest0;
dest0 = dest;
// while (*src) {
//   *dest = *src ;
//   dest++;
//   src++;
//
// }

while(*dest++ = *src++)
*dest = 0;
return dest0;

}

#include <stdio.h>
#include <string.h>
struct student{
  char name[30];
  int age ;
  float WT;
};
int main(){
  struct student s;
strcpy(  s.name ,"jad");
  s.age=14;
 s.WT =205;
printf("%s %d %f\n", s.name , s.age , s.WT );
struct student stus[100];
stus[0]=s;
printf("%s\n", stus[0].name);
}

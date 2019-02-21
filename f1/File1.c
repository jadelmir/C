#include <stdio.h>
int main(){
  char fname[50];
  printf("entert the nsme of input file \n" );
  scanf("%s\n",&fname );
  printf("%s\n",fname );
  FILE *fp = fopen(fname,"r");
  int x;
  int s= 0; //sum
  while(1 == fscanf(fp,"%d",&x ))
  s=s+x;
  printf("%d\n",s );
  fclose(fp);
}

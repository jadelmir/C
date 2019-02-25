#include <stdio.h>


int main(){
  // char fname[50];
  // printf("enter the name of input file \n" );
  // scanf("%s\n",&fname );
  // printf("%s\n",fname );
  FILE *fp = fopen("test","r");
  int x;
  int s= 0; //sum
  int highestNumber=0;
  int secondHighestNumber=0;
  while(1 == fscanf(fp,"%d",&x )){
      if(x > secondHighestNumber){
          if (x > highestNumber) highestNumber = x;
           else secondHighestNumber = x;  
      }
  }
 printf("Highest number is %d \n",highestNumber);
 printf("the second highest number is %d \n",secondHighestNumber);
  fclose(fp);
}

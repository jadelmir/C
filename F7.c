#include <stdio.h>

int main(int argc, char const *argv[])
{
    int NumberOfAst=0;
    int NumberOfSpaces=0;
    int NumberOfCols=0;
    int Rows =0;
    int numberOfPyramids=0;
    // Scan number of rows from input 
    printf("please enter number of pyramids");
    scanf("%d",&numberOfPyramids);
    printf("Hello please enter number of rows");
    scanf("%d",&Rows);

    NumberOfCols = Rows*2-1;

    
    for(int i = 0; i < Rows; i++)
    {        NumberOfAst = i*2 + 1;
        NumberOfSpaces =  (NumberOfCols - NumberOfAst) ;
        printf("\n");
        for(int z = 0; z < numberOfPyramids; z++)
         {
    int numberOfPrintedAst = 0;

             for(int j = 0; j < NumberOfCols; j++)
             {
                        if(NumberOfSpaces/2> j){

                printf(" ");
            }else if(NumberOfAst > numberOfPrintedAst){
                printf("*");
                numberOfPrintedAst++;

            }else{
                printf(" ");

            }
            }
            
        }
        
    }
    

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int NumberOfAst=1;
    int NumberOfSpaces=0;
    int NumberOfCols;
    int Rows ;
    // Scan number of rows from input 
    printf("Hello please enter number of rows");
    scanf("%d",&Rows);

    NumberOfCols = Rows*2-1;
    
    for(int i = 0; i < Rows; i++) // printing the rows
    {
        NumberOfAst = i*2 + 1;
        NumberOfSpaces =  (NumberOfCols - NumberOfAst) ;
    int numberOfPrintedAst = 0;
    
        
         for(int j = 0; j < NumberOfCols; j++)// printing each column
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
        printf("\n");
        
    }
    

    return 0;
}


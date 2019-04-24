int palindrome(int n){
    int lowestHalf = n ;
   int Top ;

    for(int i = 0; i < 16; i++){
    int x = n;

     Top = x << 31 - i ;
     if((lowestHalf&1)!=(Top&1))return 0;
     lowesthalf = lowestHalf << 1;
    };
    return 1;
    
}

int palindrome(int n){
    int maskH = 1 <<31 ;
    int maskL = 1 ;
    for (int i ; i <16;i++){
        if((n&maskL)!= 0 && (n&maskH)==0)return 0 ;
        if((n&maskL)== 0 && (n&maskH)!=0)return 0 ;
        maskH = maskH >>1 ;
        maskL = maskL: << 1 ;
    }
    return 1;
}
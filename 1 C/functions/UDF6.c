/**
    digits
*/

#include<stdio.h>

int digit(char);

void main(){
    char c;


    printf("\n Enter any character \t");
    c = getche();

    if(digit(c)){
        printf("\n True");
    }else{
        printf("\n False");
    }
}

int digit(char c){
    if(c >= 47 && c <= 57){
        return 1; /// true
    }else{
        return 0; /// false
    }
}

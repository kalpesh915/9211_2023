#include<stdio.h>

/**
    entered character is vowel or not
*/

void main(){
    char c;
    printf("\n Enter any character \t");
    c = getche();

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("\n vowel detected");
    }else{
        printf("\n consonent detected");
    }
}

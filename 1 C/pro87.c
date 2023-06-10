#include<stdio.h>

/**
    entered character is vowel or not
*/

void main(){
    char c;
    int uw, lw;
    printf("\n Enter any character \t");
    c = getche();

    uw = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    lw = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if(uw || lw){
        printf("\n vowel detected");
    }else{
        printf("\n consonent detected");
    }
}

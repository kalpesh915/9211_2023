#include<stdio.h>

/**
    entered character is vowel or not
*/

void main(){
    char c;
    printf("\n Enter any character \t");
    c = getche();

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("\n vowel detected");
    }else{
        printf("\n consonent detected");
    }
}

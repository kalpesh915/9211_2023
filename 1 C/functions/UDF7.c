/**
    space
*/

#include<stdio.h>

int space(char);

void main(){
    char c;


    printf("\n Enter any character \t");
    c = getche();

    if(space(c)){
        printf("\n True");
    }else{
        printf("\n False");
    }
}

int space(char c){
    if(c == 32){
        return 1; /// true
    }else{
        return 0; /// false
    }
}

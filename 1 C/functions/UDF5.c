/**
    character uppercase
*/

#include<stdio.h>

int upperCase(char);

void main(){
    char c;
    int ans;

    printf("\n Enter any character \t");
    c = getche();

    ans = upperCase(c);
    if(ans){
        printf("\n True");
    }else{
        printf("\n False");
    }
}

int upperCase(char c){
    if(c >= 65 && c <= 90){
        return 1; /// true
    }else{
        return 0; /// false
    }
}

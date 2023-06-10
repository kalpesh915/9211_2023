#include<stdio.h>

/**
    Goto Keyword
*/

void main(){
    int i;

    /// lable
    question:
    printf("\n 5 * 5 =? \t");
    scanf("%d", &i);

    if(i == 25){
        printf("\n Correct Answer");
    }else{
        goto question;
    }
}

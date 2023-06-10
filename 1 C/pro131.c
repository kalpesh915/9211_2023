#include<stdio.h>

/**
    custom loop with use of goto
*/

void main(){
    int i = 1;

    loop:
    printf("%d ", i);
    i++;

    if(i<=10){
        goto loop;
    }

}

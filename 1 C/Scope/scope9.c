#include<stdio.h>

/**
    With static keyword
*/


void  main(){
    int i;
    for(i=0; i<=10; i++){
        msg();
    }
}

void msg(){
    static int count = 1;
    printf("\n value of count is %d", count);
    count++;
}

#include<stdio.h>

/**
    Without static keyword
*/


void  main(){
    int i;
    for(i=0; i<=10; i++){
        msg();
    }
}

void msg(){
    int count = 1;
    printf("\n value of count is %d", count);
    count++;
}

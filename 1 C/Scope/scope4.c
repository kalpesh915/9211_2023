#include<stdio.h>

/**
    Global Scope
*/

int ip = 100;

void  main(){
    printf("\n value of ip is %d", ip);
    msg();
}

void msg(){
    printf("\n value of ip is %d", ip);
}

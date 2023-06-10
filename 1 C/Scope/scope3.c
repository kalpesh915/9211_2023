#include<stdio.h>

/**
    Global Scope

    {} known as a block
*/

int ip = 100;

void  main(){
    printf("\n value of ip is %d", ip);

    {
        printf("\n value of ip is %d", ip);
    }

    {
        printf("\n value of ip is %d", ip);
    }

    printf("\n value of ip is %d", ip);
}

#include<stdio.h>

/// table print

void main(){
    int i, ip;
    printf("\n Enter any number to print table \t");
    scanf("%d",&ip);

    for(i=1 ; i<=10; i++){
        printf("\n %d * %d : %d", ip, i, ip*i);
    }
}

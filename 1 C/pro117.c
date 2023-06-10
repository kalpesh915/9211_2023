#include<stdio.h>
/**
    draw following pattern
A
BB
CCC
DDDD
EEEEE

ASCII of A is 65
*/

void main(){
    int i, j;
    for(i=65; i<=69; i++){
        for(j=65; j<=i; j++){
            printf("%c", i);
        }
        printf("\n");
    }
}

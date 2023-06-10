/**
    print array in reverse order
*/

#include<stdio.h>

#define size 10

void main(){
    int ip1[size], i;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip1[i]);
    }

    for(i=size-1; i>= 0; i--){
        printf(" %d", ip1[i]);
    }
}

#include<stdio.h>

#define size 3

void main(){
    int ip[size][size], r, c;

    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            printf("\n Enter value for ip[%d][%d] \t", r, c);
            scanf("%d", &ip[r][c]);
        }
    }

    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            printf(" ip[%d][%d] : %d", r, c, ip[r][c]);
        }
        printf("\n");
    }
}

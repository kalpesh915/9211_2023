#include<stdio.h>

/**
    sum of 2d Array
*/

#define size 3

void main(){
    int ip[size][size], r, c, max = 0;

    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            printf("\n Enter value for ip[%d][%d] \t", r, c);
            scanf("%d", &ip[r][c]);

            if(max < ip[r][c]){
                max = ip[r][c];
            }
        }
    }
    printf("\n Max is %d", max);

}

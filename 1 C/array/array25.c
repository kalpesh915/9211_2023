/**
    make sum of two array and store in 3rd array
*/

#include<stdio.h>

#define size 10

void main(){
    int ip1[size], ip2[size], ans[size], i;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip1[%d] \t", i);
        scanf("%d", &ip1[i]);
    }

    for(i=0; i<size; i++){
        printf("\n Enter value for ip2[%d] \t", i);
        scanf("%d", &ip2[i]);
    }

    for(i=0; i<size; i++){
        ans[i] = ip1[i] + ip2[i];
    }

    for(i=0; i<size; i++){
        //printf(" ans[%d] : %d", i, ans[i]);
        printf("\n ip1[%d] : %d + ip2[%d] : %d = ans[%d] : %d", i, ip1[i], i, ip2[i], i, ans[i]);
    }
}

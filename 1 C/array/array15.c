/**
    get 10 values in array from user and sort values in ascending order
*/

#include<stdio.h>
#define size 10

void main(){
    int ip[size], i, j, tmp;

    for(i=0; i<size; i++){
        printf("\n Enter any value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(ip[i] < ip[j]){
                tmp = ip[i];
                ip[i] = ip[j];
                ip[j] = tmp;
            }
        }
    }

    printf("\n sorted values are \n");
    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}

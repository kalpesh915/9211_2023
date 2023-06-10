/**
    void pointer calloc(size of bytes, number of bytes)
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int ip, *ptr, size, i;
    printf("\n Enter Size of Bytes to Occupy by Malloc () \t");
    scanf("%d", &ip);

    ptr = (int*)calloc(ip, sizeof(int));

    for(i=1; i<=ip; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    free(ptr);
}

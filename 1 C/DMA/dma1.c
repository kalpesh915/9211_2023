/**
    void pointer malloc(size ob bytes)
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int ip, *ptr, size, i;
    printf("\n Enter Size of Bytes to Occupy by Malloc () \t");
    scanf("%d", &ip);

    ptr = (int*)malloc(ip);

    /// calculate how many blocks are created
    /// size = 30 / 4
    size = (int)(ip / sizeof(int));

    for(i=1; i<=size; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }
}

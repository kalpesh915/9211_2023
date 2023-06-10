/**
    void pointer calloc(size of bytes, number of bytes)
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int ip, *ptr, size, i;
    printf("\n Enter Size of Bytes to Occupy by Malloc () \t");
    scanf("%d", &ip);

    ptr = (int*)malloc(ip);

    size = (int) (ip / sizeof(int));

    for(i=1; i<=size; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    printf("\n Enter New Size of Bytes to Occupy by Malloc () \t");
    scanf("%d", &ip);
    ptr = realloc(ptr, ip);

    size = (int) (ip / sizeof(int));
    //printf("\n New Size is %d", size);
    for(i=1; i<=size; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    free(ptr);
}

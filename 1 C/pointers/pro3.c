/**
    array to basic pointer
*/

#include<stdio.h>

void main(){
    int ip[10] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr;

    ptr = &ip;
    printf("\n address is %d and value is %d", ptr, *ptr);
    ptr++;
    printf("\n address is %d and value is %d", ptr, *ptr);
}

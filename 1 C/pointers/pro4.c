/**
    array to basic pointer
*/

#include<stdio.h>

void main(){
    int ip[10] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr, i;

    ptr = &ip;
    for(i=1; i<=10; i++)
    {
        printf("\n address is %d and value is %d", ptr, *ptr);
        ptr++;
    }
}

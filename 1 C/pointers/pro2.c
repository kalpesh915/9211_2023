/**
    basic pointer

    * in variable declaration is used to
    recognize variable as a pointer
    & is used to get address of any variable
    * in program is used to get value of
    any variable.
*/

#include<stdio.h>

void main(){
    int ip = 100, *ptr;
    printf("\n value of ip is %d", ip);
    printf("\n address of ip is %d", &ip);

    ptr = &ip; /// address of ip assign to ptr
    printf("\n value of ptr is %d", ptr);
    printf("\n address of ptr is %d", &ptr);
    printf("\n value of *ptr is %d", *ptr);

    *ptr = 1000;
    printf("\n value of ip is %d", ip);
}

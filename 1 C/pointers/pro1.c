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
    int ip, *ptr;

    ip = 100;
    printf("\n value of ip is %d", ip);
    printf("\n Address of ip is %d", &ip);
    printf("\n Address of ip is %u", &ip);
    printf("\n Address of ip is %x", &ip);
}

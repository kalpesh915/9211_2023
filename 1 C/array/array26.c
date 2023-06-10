/**
    Three dimentional array

    ip

    0                               1                               2
        0    1      2           0       1        2          0       1       2
    0                       0  15                       0
    1                       1                           1
    2                       2                           2

    ip[size][row][column]
*/

#include<stdio.h>
#define size 3

void main(){
    int ip[size][size][size];
    printf("\n Size of Array is %d Bytes",sizeof(ip));
}

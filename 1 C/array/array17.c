#include<stdio.h>

#define size 3

/**
    array_name[rows][columns]

    ip      0       1       2

    0       12      23      34
    1       45      56      67
    2       78      89      90
*/

void main(){
    int ip[size][size] = {12, 23, 34, 45, 56, 67, 78, 89, 90};

    printf("\n size of array is %d bytes", sizeof(ip));
    printf("\n %d", ip[1][1]);

}

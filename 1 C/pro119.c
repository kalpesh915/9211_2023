#include<stdio.h>
/**
    draw following pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void main(){
    int i, j, count=1;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%3d", count++);
        }
        printf("\n");
    }
}

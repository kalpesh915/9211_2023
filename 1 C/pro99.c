/**
    while loop
*/

#include<stdio.h>

void main(){
    int i = 1, nm;

    printf("\n Enter any number to print table \t");
    scanf("%d", &nm);

    while(i <= 10){
        printf("\n %d * %d : %d", nm, i, nm * i);
        i++;
    }
}

/**
    Call by reference
*/

#include<stdio.h>

void main(){
    int i, j;
    printf("\n Enter value for i \t");
    scanf("%d", &i);
    printf("\n Enter value for j \t");
    scanf("%d", &j);
    printf("\n before swap i is %d and j is %d", i, j);
    swap(&i, &j);
    printf("\n after swap i is %d and j is %d", i, j);
}

void swap(int *i, int *j){

    int *tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
    printf("\n in swap i is %d and j is %d", *i, *j);
}

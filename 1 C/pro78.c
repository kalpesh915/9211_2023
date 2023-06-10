/*
    check number is positive or negative
*/

#include<stdio.h>
void main(){
    int ip;
    printf("Enter any value for ip \t");
    scanf("%d", &ip);

    if(ip > 0){
        printf("\n Positive");
    }else{
        printf("\n Negative");
    }
}

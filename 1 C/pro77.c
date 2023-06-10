/*
    simple if statement
*/

#include<stdio.h>
void main(){
    int ip;
    printf("Enter any value for ip \t");
    scanf("%d", &ip);

    if(ip > 100){
        printf("\n value is greater than hundred");
    }else{
        printf("\n value is less than hundred");
    }

    printf("\n Program completed");
}

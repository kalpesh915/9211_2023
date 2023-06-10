/*
    check number is odd or even
*/

#include<stdio.h>
void main(){
    int ip;
    printf("Enter any value for ip \t");
    scanf("%d", &ip);

    if(ip %2 == 0){
        printf("\n Even");
    }else{
        printf("\n Odd");
    }
}

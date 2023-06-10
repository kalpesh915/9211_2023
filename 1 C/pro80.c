/*
    check year is leap year or not
*/

#include<stdio.h>
void main(){
    int ip;
    printf("Enter any value for ip \t");
    scanf("%d", &ip);

    if(ip %4 == 0){
        printf("\n Leap Year");
    }else{
        printf("\n Non Leap Year");
    }
}

/*
    find maximum out of two number
*/

#include<stdio.h>
void main(){
    int ip1, ip2;
    printf("Enter any value for ip1 \t");
    scanf("%d", &ip1);
    printf("Enter any value for ip2 \t");
    scanf("%d", &ip2);

    if(ip1 > ip2){
        printf("\n Maximum is %d", ip1);
    }else{
        printf("\n Maximum is %d", ip2);
    }
}

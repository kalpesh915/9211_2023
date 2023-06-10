/**
    make sum of all digits in enetered number
    ex. 235785  =   30
*/

#include<stdio.h>

void main(){
    int ip, ans =0;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    while(ip > 0){
        ans = ans + ip % 10;
        ip = ip / 10;
    }

    printf("\n Answer is %d", ans);
}

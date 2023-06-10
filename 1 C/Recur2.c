#include<stdio.h>
/**
    Function calling itself with new values

    call function with new values
    must be provide exit condition

    find sum of digits

    ex.
    12345   =   15
*/

void main(){
    int ip, ans;

    printf("\n Enter any value \t");
    scanf("%d", &ip);

    ans = sum(ip);

    printf("\n sum of %d is %d", ip, ans);
}


int sum(int ip){
    int ans = 0;
    if(ip == 1){
        return ip;
    }else{
        ans = ip % 10;
        return ans + sum(ip / 10);
    }
}

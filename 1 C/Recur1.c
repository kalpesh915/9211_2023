#include<stdio.h>
/**
    Function calling itself with new values

    call function with new values
    must be provide exit condition

    factorial with recursion

    ex.
    5   ans     120

    5 * 4 * 3 * 2 * 1 = 120
*/

void main(){
    int ip, ans;

    printf("\n Enter any value \t");
    scanf("%d", &ip);

    ans = factorial(ip);

    printf("\n Factorial of %d is %d", ip, ans);
}


int factorial(int ip){
    if(ip == 1){
        return ip;
    }else{
        return ip * factorial(ip - 1);
    }
}

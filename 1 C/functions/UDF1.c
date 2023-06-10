/**
    Create a function to find length of string

    012345678901
    iant Rajkot\0

    \0 = null character used to indicate end of string.
*/

#include<stdio.h>

void main(){
    char ip[100];
    int ans;

    printf("\n Enter any string \t");
    gets(ip);

    ans = stringLength(ip);
    printf("\n String Length is %d", ans);
}

int stringLength(char ip[100]){
    int cnt = 0;

    while(ip[cnt] != '\0'){
        cnt++;
    }

    return cnt;
}

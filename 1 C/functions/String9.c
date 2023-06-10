/**
    string functions
    compare two string

    str1 == str2    =   0
    str1 > str2     =   1
    str1 < str2     =   -1
*/

#include<stdio.h>
#include<string.h>

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any String for ip1 \t");
    gets(ip1);
    printf("\n Enter any String for ip2 \t");
    gets(ip2);

    ans = strcmp(ip1, ip2);

    printf("\n answer is %d", ans);
}

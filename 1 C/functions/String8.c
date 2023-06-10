/**
    string functions

    uppercase, lowercase
*/

#include<stdio.h>
#include<string.h>

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any String for ip1 \t");
    gets(ip1);
    printf("\n String Uppercase is %s", strupr(ip1));
    printf("\n String Lowercase is %s", strlwr(ip1));
}

/**
    string functions
*/

#include<stdio.h>
#include<string.h>

void main(){
    char ip[100];
    int ans;

    printf("\n Enter any String \t");
    gets(ip);

    ans = strlen(ip);
    printf("\n String Length is %d", ans);
}

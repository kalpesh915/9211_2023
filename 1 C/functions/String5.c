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

    strrev(ip);

    printf("\n String Reverse is %s", ip);
}

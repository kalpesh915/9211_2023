/**
    string functions

    string copy
    destination, source
*/

#include<stdio.h>
#include<string.h>

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any String \t");
    gets(ip1);

    strcpy(ip2, ip1);

    printf("\n Copied String is %s", ip2);
}

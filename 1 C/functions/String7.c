/**
    string functions

    string concat
    destination, source
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

    //strcat(ip2, ip1);
    strcat(ip1, ip2);

    printf("\n New String is %s", ip1);
    printf("\n New String is %s", ip2);
}

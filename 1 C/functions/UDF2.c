/**
    convert string to uppercase
    ASCII code is
    A - 65 Z - 90
    a - 97 z - 122
*/

#include<stdio.h>

void main(){
    char ip[100];
    int ans;

    printf("\n Enter any string \t");
    gets(ip);
    toUpperCase(ip);
}


void toUpperCase(char ip[100]){
    int cnt = 0;

    while(ip[cnt] != '\0'){
        if(ip[cnt] >= 97 && ip[cnt] <= 122){
            ip[cnt] = ip[cnt] - 32;
        }
        cnt++;
    }

    printf("\ new String is %s", ip);
}


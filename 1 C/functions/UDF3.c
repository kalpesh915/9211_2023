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
    toLowerCase(ip);
}


void toLowerCase(char ip[100]){
    int cnt = 0;

    while(ip[cnt] != '\0'){
        if(ip[cnt] >= 65 && ip[cnt] <= 90){
            ip[cnt] = ip[cnt] + 32;
        }
        cnt++;
    }

    printf("\ new String is %s", ip);
}


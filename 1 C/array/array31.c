/**
    character array / string
    character enclaused in ""
    %s is format character for string
*/

#include<stdio.h>

void main(){
    char ip[100];
    printf("\n Enter your name \t");
    scanf("%s", &ip);
    printf("\n Welcome %s", ip);
}

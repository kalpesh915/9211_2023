/**
    string palindrome

    nayan
    >> <<
*/

#include<stdio.h>
#include<string.h>

void main(){
    char ip1[100], ip2[100];
    int ans;

    /// get a string from user
    printf("\n Enter any String for ip1 \t");
    gets(ip1);

    /// copy string1 to string2
    strcpy(ip2, ip1);

    /// reverse the string 2
    strrev(ip2);

    /// compare
    ans = strcmp(ip1, ip2);

    if(ans == 0){
        printf("\n String is Palindrome");
    }else{
        printf("\n Try another String");
    }

}

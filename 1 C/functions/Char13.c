/**
    count how many digits, alphabets, upper, lower, special char,
    words total length

    0123456
    rajkot\0 <- null character used to indicate end of string
*/
#include<stdio.h>
#include<ctype.h>

void main(){
    char ip[100], c;
    int cnt = 0, cc = 0, dc = 0, uc = 0, lc = 0, scc = 0, wc = 1;

    printf("\n Enter any String \t");
    gets(ip);

    while(ip[cnt] != '\0'){
        c = ip[cnt];

        if(isalpha(c)){
            cc++;
            if(isupper(c)){
                uc++;
            }else{
                lc++;
            }
        }else if(isdigit(c)){
            dc++;
        }
        else if(ispunct(c)){
            scc++;
        }else if(isspace(c)){
            wc++;
        }
        cnt++;
    }

    printf("\n total characters are %d", cnt);
    printf("\n total alphabets are %d", cc);
    printf("\n total uppercase alphabets are %d", uc);
    printf("\n total lowercase alphabets are %d", lc);
    printf("\n total special characters are %d", scc);
    printf("\n total words are %d", wc);
    printf("\n total digits are %d", dc);
}

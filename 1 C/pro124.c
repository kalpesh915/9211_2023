#include<stdio.h>
/**
    draw following pattern

    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE

*/

void main(){
    char i, j, s;

    for(i='A'; i<='E'; i++){
        for(s='E'; s>=i; s--){
            printf("-");
        }

        for(j=i; j>='A'; j--){
            printf("%c", j);
        }

        for(j='B'; j<=i; j++){
            printf("%c", j);
        }

        printf("\n");
    }
}

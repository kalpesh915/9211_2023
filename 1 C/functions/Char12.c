#include<stdio.h>
#include<ctype.h>

void main(){
    char c;

    printf("\n Enter any character \t");
    c = getche();

    printf("\n to uppercase is %c", toupper(c));
    printf("\n to lowercase is %c", tolower(c));
}

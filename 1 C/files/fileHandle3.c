#include<stdio.h>

/**
    create a text file with FILE Handling in C
*/

void main(){
    FILE *fp;
    char data[100];
    fp = fopen("data2.txt", "w");
    printf("\n Enter any string to write in File \t");
    gets(data);
    fputs(data, fp);
    fclose(fp);
}

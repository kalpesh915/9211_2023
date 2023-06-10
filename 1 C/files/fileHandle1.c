#include<stdio.h>

/**
    create a text file with FILE Handling in C
*/

void main(){
    FILE *fp;
    fp = fopen("data1.txt", "w");
    printf("file open successfully");
    fputs("Welcome to world of files in C Language", fp);
    fclose(fp);
}

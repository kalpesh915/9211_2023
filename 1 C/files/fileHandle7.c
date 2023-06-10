#include<stdio.h>

/**
    write mode overwrite exsiting data
*/

void main(){
    FILE *fp;
    char data[100];
    fp = fopen("data3.txt", "a");
    fputs("Data is Welcome to files in c language", fp);
    printf("\n appending process completed");
    fclose(fp);
}

#include<stdio.h>

/**
    write mode overwrite exsiting data
*/

void main(){
    FILE *fp;
    char data[100];
    fp = fopen("data3.txt", "w");
    fputs("Data is Welcome to files in c language", fp);
    printf("\n writing process completed");
    fclose(fp);
}

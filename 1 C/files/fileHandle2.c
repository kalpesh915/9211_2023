#include<stdio.h>

/**
    create a text file with FILE Handling in C
*/

void main(){
    FILE *fp;
    char data[100];
    fp = fopen("data1.txt", "r");
    fgets(data, 100, fp);
    printf("\n Data From file is %s", data);
    fclose(fp);
}

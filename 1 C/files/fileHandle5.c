#include<stdio.h>

/**
    create a text file with FILE Handling in C
*/

void main(){
    FILE *fp;
    char data[100];
    fp = fopen("data2.txt", "r");
    /// feof = file end of file
    while(!feof(fp)){
        fgets(data, 100, fp);
        printf("Data is %s", data);
    }

    fclose(fp);
}

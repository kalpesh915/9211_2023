/**
    check entered values is exist in array or not
*/

#include<stdio.h>
#define size 10

void main(){
    int ip[size], i, tmp, flag = 0;

    for(i=0; i<size; i++){
        printf("\n Enter any value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    printf("\n Enter any number to find in array \t");
    scanf("%d", &tmp);

    for(i=0; i<size; i++){
        if(ip[i] == tmp){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\n %d value is exist in array", tmp);
    }else{
        printf("\n %d value is not exist in array", tmp);
    }
}

/**
    2D Array sorting
    logic :
        step 1  :   get data in 2D array
        step 2  :   convert 2D array in 1D array
        step 3  :   sort 1D array
        step 4  :   convert 1D array in 2D array
        step 5  :   print sorted array
*/

#include<stdio.h>

#define size 3

void main(){
    int ip1[size][size], ip2[size * size], r, c, tmp, cnt=0, i, j;

    /// step 1
    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            printf("\n Enter value for ip[%d][%d] \t", r, c);
            scanf("%d",&ip1[r][c]);
        }
    }

    /// step 2
    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            ip2[cnt] = ip1[r][c];
            cnt++;
        }
    }

    /// step 3
    for(i=0; i<size * size; i++){
        for(j=0; j<size * size; j++){
            if(ip2[i] < ip2[j]){
                tmp = ip2[i];
                ip2[i] = ip2[j];
                ip2[j] = tmp;
            }
        }
    }

    ///step 4
    cnt = 0;
    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            ip1[r][c] = ip2[cnt];
            cnt++;
        }
    }

    /// step 5
    printf("\n Sorted values are :\n");
    for(r=0; r<size; r++){
        for(c=0; c<size; c++){
            printf(" ip1[%d][%d] : %d", r, c, ip1[r][c]);
        }
        printf("\n");
    }
}

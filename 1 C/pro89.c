#include<stdio.h>

/**
    Light Bill
    units       rate
    000-100     10
    101-200     11
    201-300     12
    300-NNN     13

    unit 112
    100 * 10    1000
    012 * 11    132
*/

void main(){
    int units, total, tmp;

    printf("\n Enter Units \t");
    scanf("%d", &units);

    if(units >= 0 && units <= 100){
        total = units * 10;
    }else if(units > 100 && units <= 200){
        tmp = units - 100;
        total = tmp * 11 + 1000;
    }else if(units > 200 && units <= 300){
        tmp = units - 200;
        total = tmp * 12 + 2100;
    }else if(units > 300){
        tmp = units - 300;
        total = tmp * 13 + 3300;
    }

    printf("\n Payable Amount is %d", total);
}

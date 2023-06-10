#include<stdio.h>
enum days {monday = 1, tuesday, wednesday, thursday, friday, satureday, sunday};

void main(){
    enum days d1;
    d1 = sunday;
    printf("\n value is %d", d1);
}

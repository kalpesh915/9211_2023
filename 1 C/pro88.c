#include<stdio.h>

/**
    Mark sheet demo
*/

void main(){
    int sub1, sub2, sub3, sub4, sub5, total;
    float per;
    printf("\n Enter marks for subject 1 \t");
    scanf("%d", &sub1);
    printf("\n Enter marks for subject 2 \t");
    scanf("%d", &sub2);
    printf("\n Enter marks for subject 3 \t");
    scanf("%d", &sub3);
    printf("\n Enter marks for subject 4 \t");
    scanf("%d", &sub4);
    printf("\n Enter marks for subject 5 \t");
    scanf("%d", &sub5);

    if(sub1 >= 35 && sub2 >= 35 && sub3 >= 35 && sub4 >= 35 && sub5 >= 35){
        total = sub1 + sub2 + sub3 + sub4 + sub5;
        per = (float) total / 5;
        printf("\n Total Marks are %d", total);
        printf("\n Percentage is %f", per);
    }else{
        printf("\n batter luck next time");
    }
}

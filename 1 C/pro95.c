/**
    Basic Calculator with switch case
*/

#include<stdio.h>

void main(){
    int ip1, ip2, ans = 0;
    char op;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    printf("\n Press + for Sum");
    printf("\n Press - for Sub");
    printf("\n Press * for Mul");
    printf("\n Press / for Div \t");
    op = getche();


    switch(op){
        case '+':{
            ans = ip1 + ip2;
            break;
        }
        case '-':{
            ans = ip1 - ip2;
            break;
        }
        case '*':{
            ans = ip1 * ip2;
            break;
        }
        case '/':{
            ans = ip1 / ip2;
            break;
        }
        default:{
            printf("\n invalid operator selected");
            break;
        }
    }

    printf("\n answer is %d", ans);
}

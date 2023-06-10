/**
        string compare
*/

#include<stdio.h>

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any string 1 \t");
    gets(ip1);
    printf("\n Enter any string 2 \t");
    gets(ip2);
    ans = compare(ip1, ip2);
    printf("\n answer is %d", ans);
}


int compare(char ip1[100], char ip2[100]){
    int cnt = 0, ans = 0;

    while(ip1[cnt] != '\0' || ip2[cnt] != '\0'){
        if(ip1[cnt] != ip2[cnt]){
            ans = ip1[cnt] - ip2[cnt];
            break;
        }
        cnt++;
    }

    return ans;
}

/**
    UDF : user defined function

    return_type function_name(parameters_list){
        function code
    }

    declaration, calling, defination
*/

#include<stdio.h>

int maximum(int, int); /// declaration
/**
    int         =   return type
    maximum     =   function name
    (int, int)  =   parameters
*/


void main(){
    int ip1, ip2, ans;

    printf("\n Enter any value for ip1 \t");
    scanf("%d",&ip1);
    printf("\n Enter any value for ip2 \t");
    scanf("%d",&ip2);

    ans = maximum(ip1, ip2); /// Calling
    printf("\n Maximum is %d", ans);
}

/// defination
int maximum(int ip1, int ip2){
    if(ip1 > ip2){
        return ip1;
    }else{
        return ip2;
    }
}

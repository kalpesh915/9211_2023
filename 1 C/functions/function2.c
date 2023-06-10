/**
    UDF 2 : with Parameters no Return
*/

/// declaration
void sum(int, int);

void main(){
    int ip1, ip2;
    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);
    /// function Calling
    sum(ip1, ip2);
}

/// defination
void sum(int i, int j){
    printf("\n Sum is %d", i + j);
}

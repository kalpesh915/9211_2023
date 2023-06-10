/**
    UDF 4 : with Parameters with Return
*/

/// declaration
int cube(int);

void main(){
    int ip, ans;
    printf("\n Enter value for ip \t");
    scanf("%d",&ip);
    ans = cube(ip);
    printf("\n Cube of %d is %d ", ip, ans);
}

/// defination
int cube(int i){
    return i * i * i;
}

/**
    UDF 3 : no Parameters with Return
*/

/// declaration
float pi();

void main(){
    float ans;
    ans = pi();
    printf("\n answer is %f", ans);
    printf("\n answer is %f", pi());
}

/// defination
float pi(){
    return 3.14;
}

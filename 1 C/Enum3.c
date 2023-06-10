#include<stdio.h>
enum boolean {false, true};

void main(){
    enum boolean b1;
    b1 = true;

    if(b1){
        printf("\n value is True");
    }else{
        printf("\n value is False");
    }
}

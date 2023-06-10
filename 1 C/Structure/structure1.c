/**
    Structure data type
*/

#include<stdio.h>

struct student{
    int roll;       /// 04
    char name[20];  /// 20
    int marks;      /// 04
    float per;      /// 04
                    /// 32
};

void main(){
    /// how to create structure variable
    struct student s1;
    printf("\n Size of Structure is %d Bytes",sizeof(s1));
}

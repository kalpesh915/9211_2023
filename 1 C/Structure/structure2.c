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
    struct student s1 = {123, "Ankit Ajagia", 345, 78.78};
    printf("\n Size of Structure is %d Bytes",sizeof(s1));

    printf("\n Roll Number is %d", s1.roll);
    printf("\n Name is %s", s1.name);
    printf("\n Marks is %d", s1.marks);
    printf("\n Percentage is %f", s1.per);
}

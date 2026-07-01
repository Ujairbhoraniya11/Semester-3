// WAP to define a C structure named Student (roll_no, name, branch and
// batch_no) and also to access the structure members using Pointer.

#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[30];
    char branch[30];
    int batch_no;
};

int main() {
    
    struct student s;
    struct student *s1 = &s;
    
    printf("Enter Roll NUmber : ");
    scanf("%d",&s1->roll);  // s1->roll not work.  &s1->roll same as &roll. 
    
    printf("Enter Name : ");
    scanf("%s",s1->name);
    
    printf("Enter Branch : ");
    scanf("%s", s1->branch);
    
    printf("Enter Batch No : ");
    scanf("%d", &s1->batch_no);
    
    
    printf("Roll : %d\n",s1->roll);
    printf("Name : %s\n",s1->name);
    printf("Branch : %s\n",s1->branch);
    printf("Batch No : %d",s1->batch_no);
    
    
    return 0;
}
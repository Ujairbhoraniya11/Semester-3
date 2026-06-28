// WAP to find the largest among the given three numbers by user. 
#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    
    printf("Enter Numbers : ");
    scanf("%d %d %d", &num1,&num2,&num3);
    
    if(num1 > num2) {
        if(num1 > num3){
            printf("%d is Largest Number ", num1);
        }else {
            printf("%d is Largest Number ", num3);
        }
    }else if(num2 > num3){
        printf("%d is Largest Number ", num2);
    }else if(num3 > num2) {
        printf("%d is Largest Number", num3);
    }else {
        printf("Something Wrong.");
    }
    
    return 0;
}
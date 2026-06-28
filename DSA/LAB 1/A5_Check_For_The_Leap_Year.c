// WAP to check for the leap year.
#include <stdio.h>

int main() {
    int year;
    
    printf("Enter Year : ");
    scanf("%d",&year);
    
    if( (year % 400 == 0 ) || (year % 4 ==0 && year % 100 != 0) ){
        printf("Leap Year.");
    }else {
        printf("No Leap Year.");
    }
    return 0;
}
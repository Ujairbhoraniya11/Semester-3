//  WAP to convert number of days into year, week & days [e.g. 375 days mean 1
// year, 1 week and 3 days].

#include <stdio.h>

int main() {
    int totaldays, year, week, days;
    
    
    printf("Enter Total Days : ");
    scanf("%d", &totaldays);
    
    year = totaldays / 365;
    week = (totaldays % 365) / 7;
    days = (totaldays % 365) % 7 ;
    
    printf("Total Seconds %d\n",totaldays);
    printf("Year = %d\n",year);
    printf("Week = %d\n",week);
    printf("Days = %d",days);
    
    return 0;
}
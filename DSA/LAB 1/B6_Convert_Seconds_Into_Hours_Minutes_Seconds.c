// WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS
// [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].

#include <stdio.h>

int main() {
    int totalseconds, hour, minit, second;
    
    
    printf("Enter Total Seconds : ");
    scanf("%d", &totalseconds);
    
    hour = totalseconds / 3600;
    minit = (totalseconds % 3600) / 60;
    second = totalseconds % 60 ;
    
    printf("Total Seconds %d\n",totalseconds);
    printf("After Coverting into HH:MM:SS  =  %d:%d:%d",hour,minit,second);
    
    return 0;
}
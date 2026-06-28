// WAP to calculate area of a Circle (A = πr2).

#include <stdio.h>

int main() {
    int r;
    float pi = 22 / 7, ans;
    
    printf("Enter R : ");
    scanf("%d",&r);
    
    ans = pi * (r * r);
    
    printf("Are of a Circle : %f", ans);
    
    return 0;
}

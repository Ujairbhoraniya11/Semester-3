// WAP to calculate the sum of n numbers using Pointer.
#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,sum=0;
    int n;
    
    printf("Enter N : ");
    scanf("%d",&n);
    
    int *arr = (int *) malloc(n*sizeof(int));
    
    // Store 1 to n element in array.
    for(i=0; i<n; i++){ 
        *(arr+i) = i+1;
    }
    
    for(i=0; i<n; i++){
        sum += *(arr + i);
    }
    
    printf("%d",sum);
    free(arr);
    
    return 0;
}
// WAP to sort the array elements using Pointer.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,j,n;
    
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    
    int *arr = (int *) malloc(n * sizeof(int));
    
    
    for(i=0; i<n; i++){ 
        printf("Enter elements : ");
        scanf("%d",(arr + i));
    }
    
    // Bubble Sort USed.
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(*(arr + j) > *(arr +j +1)){
                int temp = *(arr + j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            } 
        }
    }
    
    
    for(i=0; i<n; i++){ 
        printf("%d",*(arr+i));
    }
    free(arr);
    
    return 0;
}
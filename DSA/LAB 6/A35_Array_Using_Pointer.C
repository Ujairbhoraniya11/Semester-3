// WAP to get and print the array elements using Pointer
#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int *arr = (int*) malloc(5 * sizeof(int));
    
    for(i=0; i<5; i++){ 
        printf("Enter elements : ");
        scanf("%d",(arr + i));
    }
    for(i=0; i<5; i++){
        printf("%d ",*(arr+i));
    }
    
    free(arr)
    return 0;
}
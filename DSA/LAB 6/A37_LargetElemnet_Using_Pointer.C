// WAP to find the largest element in the array using Pointer.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int *arr = (int *) malloc(5 * sizeof(int));
    
    int *maximum;
    
    for(i=0; i<5; i++){ 
        printf("Enter elements : ");
        scanf("%d",(arr + i));
    }
    
    maximum = arr;
    
    for(i=0; i<5; i++){
        if(*maximum <= *(arr + i)){
            *maximum = *(arr + i);
        }
    }
    
    printf("Maximum : %d",*maximum);
    free(arr);
    
    return 0;
}
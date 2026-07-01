// WAP to allocate and de-allocate memory for int, char and float variable at runtime.

#include <stdio.h>
#include <stdlib.h>


int main() {
    float *a;
    int *b;
    char *c;
    int i;
    
    a = (float*) malloc(sizeof(float)); // Allocates space for 5 integers
    b = (int *) malloc(sizeof(int));
    c = (char *) malloc(sizeof(char));
    
    if(a==NULL || b == NULL || c == NULL){
        printf("Memory Allocation Error.");
        return 0;
    }else {
        printf("Enter A : ");
        scanf("%f",a);
        
        printf("Enter B : ");
        scanf("%d",b);
        
        char west;
        scanf("%c", &west);
        
        printf("Enter C : ");
        scanf("%c",c);
        
        printf("A = %f\n",*a);
        printf("B = %d\n",*b);
        printf("C = %c\n",*c);
    }
    
    
    free(a);
    free(b);
    free(c);
    

    return 0;
} 
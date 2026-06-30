//  Read two 2x2 matrices and perform addition of matrices into third matrix and print it.
#include <stdio.h>

int main() {
    
    int matrix1[2][2],matrix2[2][2],result[2][2];
    int i,j;
    
    // Scann Matrix Element.
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Element : ");
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Element : ");
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    
    // Addition 
    for(i=0; i<2; i++) { // result matrix row
        for(j=0; j<2; j++) { // result matrix Column.
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display Result MAtrix.
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ",result[i][j]);
        }
    }
    
    
    
    return 0;
}
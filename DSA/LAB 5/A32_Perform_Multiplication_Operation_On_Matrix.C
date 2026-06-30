//  Read two matrices, first 3x2 and second 2x3, perform multiplication operation
// and store result in third matrix and print it.
#include <stdio.h>

int main() {
    
    int matrix1[3][2],matrix2[2][3],result[3][3];
    int i,j,k;
    
    // Scann Matrix Element.
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Element : ");
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Element : ");
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    
    // Multiplication
    for(i=0; i<3; i++) { // result matrix row & row
        for(j=0; j<3; j++) { // result matrix Column and Column.
            
            result[i][j] = 0;
            
            for(k=0; k<2; k++){ // Changing Row And Column.
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            
        }
    }
    
    // Display Result MAtrix.
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",result[i][j]);
        }
    }
    
    
    
    return 0;
}
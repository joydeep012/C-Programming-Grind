#include <stdio.h>

#define size 3

void getMatrixInput(int matrix[size][size], char* name) {
    char buffer[100];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("Enter the element for %s[%d][%d]: ", name, i, j);
            if(fgets(buffer, sizeof(buffer), stdin) != NULL) {
                
                if(sscanf(buffer, "%d", &matrix[i][j]) != 1) {
                    matrix[i][j] = 0;}
            }
        }
    }
}

int main() {
    int A[size][size];
    int B[size][size];
    int C[size][size];
    int i, j, k;
    
    printf("Enter elements for Matrix A[%d][%d]:\n", size, size);
    getMatrixInput(A, "A"); 
    
    printf("\nEnter elements for Matrix B[%d][%d]:\n", size, size);
    getMatrixInput(B, "B");
    
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            C[i][j] = 0;
            for(k = 0; k < size; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nMultiplication of the Matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#define SIZE 3

int main() {
    char A[SIZE][SIZE];
    char T[SIZE][SIZE];
    char buffer[100];
    
    printf("Enter character elements for a %dx%d Matrix:\n", SIZE, SIZE);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element A[%d][%d]: ", i, j);
            
            if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
                if (buffer[0] == '\n' || buffer[0] == '\0') {
                    printf("Input cannot be empty. Try again.\n");
                    j--;
                    continue;
                }
                A[i][j] = buffer[0];
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}

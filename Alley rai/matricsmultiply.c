#include <stdio.h>

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2] = {{0, 0}, {0, 0}};
    int i,j,k;

    // Multiply matrix1 and matrix2
    for (i=0; i<2;i++){
        for (j=0;j<2;j++){
            for (k=0;k<2;k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    printf("Result:\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main() {
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2] = {0};
	int i,j,k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Result:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

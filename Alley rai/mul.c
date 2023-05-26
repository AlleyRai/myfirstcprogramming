#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int array1[2] = {2, 3};
    int array2[2] = {4, 5};
    int result[2][2] = {0};

    // Multiply matrix1 and array1
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] += matrix1[i][j] * array1[j];
        }
    }

    // Multiply result and matrix2
    int final_result[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                final_result[i][j] += result[i][k] * matrix2[k][j];
            }
            final_result[i][j] *= array2[i];
        }
    }

    // Print final result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << final_result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


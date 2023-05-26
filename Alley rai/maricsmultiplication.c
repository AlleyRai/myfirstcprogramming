#include<iostream>
using namespace std;

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}};
    int array[3] = {1, 2, 3};
    int result[3] = {0, 0, 0};

    // Multiply matrix1 and array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matrix1[i][j] * array[j];
        }
    }

    // Multiply result and matrix2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i] * matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


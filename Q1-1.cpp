#include <iostream>

int** identity(int n) {
    int** matrix = new int*[n];  // Create an array of pointers

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];  // Create each row as an array of integers

        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i == j) ? 1 : 0;  // Set 1 along the diagonal, 0 elsewhere
        }
    }

    return matrix;  // Return pointer to the first element 
}

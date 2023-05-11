#include <iostream>

// Function to create a single block matrix
int* singleBlock(int n) {
    int* matrix = new int[n * n];
    for (int i = 0; i < n * n; i++) {
        matrix[i] = 1;
    }
    return matrix;
}

// Sets entire column of matrix to newValue
void setColumn(int* matrix, int n, int c, int newValue) {
    if (c < 0 || c >= n) {
        std::cout << "Invalid column index!" << std::endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        matrix[i * n + c] = newValue;
    }
}

#include <iostream>

int* singleBlock(int n) {
    int* arr = new int[n * n];  // Create a single block of integers

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i * n + j] = i;  // Initialize each element to its row index value
        }
    }

    return arr;  // Return pointer to the first element
}
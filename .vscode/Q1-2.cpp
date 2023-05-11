
#include <iostream>

int** arrayOfArrays(int n_rows, int n_cols) {
    int** arr = new int*[n_rows];  

    for (int i = 0; i < n_rows; i++) {
        arr[i] = new int[n_cols];  

        for (int j = 0; j < n_cols; j++) {
            arr[i][j] = 1;  
        }
    }
  
    return arr;  
}
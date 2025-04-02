#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Rows cannot exceed 3. Setting to 3." << endl;
        rows = 3;
    }

    cout << "Enter number of columns (max 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Columns cannot exceed 3. Setting to 3." << endl;
        cols = 3;
    }

    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
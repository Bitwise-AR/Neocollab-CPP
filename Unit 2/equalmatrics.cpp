#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;
const int MAX_MATRICES = 2;

class Matrix {
private:
    int rows;
    int cols;
    int mat[MAX_ROWS][MAX_COLS];

public:
    Matrix() {
        rows = 0;
        cols = 0;
        for (int i = 0; i < MAX_ROWS; i++) {
            for (int j = 0; j < MAX_COLS; j++) {
                mat[i][j] = 0;
            }
        }
    }

    void readMatrix(int r, int c) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    bool isEqual(Matrix other) {
        if (rows != other.rows || cols != other.cols) {
            return false;
        }
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] != other.mat[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    Matrix A, B;
    A.readMatrix(m, n);
    B.readMatrix(m, n);

    if (A.isEqual(B)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}
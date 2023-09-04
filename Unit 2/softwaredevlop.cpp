#include <iostream>
#include <vector>
using namespace std;

void change(vector<vector<int>>& matrix, int r1, int r2) {
    swap(matrix[r1 - 1], matrix[r2 - 1]);
}
void display(const vector<vector<int>>& matrix) {
    for (const vector<int>& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int r1, r2;
    cin >> r1 >> r2;
    if (r1 >= 1 && r2 >= 1 && r1 <= N && r2 <= N) {
        change(matrix, r1, r2);
        display(matrix);
    } else {
        cout << "Invalid row numbers" << endl;
    }

    return 0;
}

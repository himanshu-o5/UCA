#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Check this row on left side
    for (int i = 0; i < col; i++) {
        if (board[row][i]) return false;
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return false;
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < n; i++, j--) {
        if (board[i][j]) return false;
    }

    return true;
}

bool solveNQueens(vector<vector<int>>& board, int col, int n) {
    // Base case: If all queens are placed
    if (col >= n) return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;

            if (solveNQueens(board, col + 1, n)) return true;

            board[i][col] = 0;
        }
    }

    // If the queen cannot be placed in any row in this column, return false
    return false;
}

void printSolution(vector<vector<int>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "1 " : "0 ");
        }
        cout << endl;
    }
}

bool solveNQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (!solveNQueens(board, 0, n)) {
        cout << "Solution does not exist" << endl;
        return false;
    }

    printSolution(board, n);
    return true;
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    solveNQueens(n);
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string>> solutions;

bool isSafe(vector<string>& board, int row, int col, int n) {
    // Horizontally
    for(int i = 0; i < n; i++){
        if(board[row][i] == 'Q') return false;
    }

    // Vertically
    for(int j = 0; j < n; j++){
        if(board[j][col] == 'Q') return false;
    }

    // Diagonal left
    for(int i = row, j = col; i>= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }

    // Diagonal right
    for(int i = row, j = col; i >= 0 && j<n; i--, j++){
        if(board[i][j] == 'Q') return false;
    }
    return true;
}

void nQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans){
    if(row == n){
        ans.push_back({board});
        return;
    }

    for(int i = 0; i< n; i++){
        if(isSafe(board, row, i, n)){
            board[row][i] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][i] = '.';
        }
    }
}


vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);
    return ans;
}

int main() {
    int n = 4; // 👈 Hardcoded value of N (change this if you want)

    vector<vector<string>> result = solveNQueens(n);

    cout << "Total Solutions for " << n << "-Queens: " << result.size() << "\n\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << "Solution " << i + 1 << ":\n";
        for (const string& row : result[i]) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}

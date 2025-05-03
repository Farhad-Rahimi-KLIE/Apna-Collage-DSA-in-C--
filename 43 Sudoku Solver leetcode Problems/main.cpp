#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string>> solutions;

bool Safe(vector<vector<char>>& board, int row, int col, int dig) {
    // Horizontally
        for(int i = 0; i< 9; i++){
            if(board[row][i] == dig){
                return false;
            }
        }
        // Vertically
        for(int j = 0; j< 9; j++){
            if(board[j][col] == dig){
                return false;
            }
        }
        // Grid
        int SRow = (row/3)*3;
        int SCol = (col/3)*3;
        for(int i = SRow; i <= SRow+2; i++){
            for(int j = SCol; j <= SCol+2; j++){
            if(board[i][j] == dig){
                return false;
            }
            }
        }
        return true;
}

bool Helper(vector<vector<char>>& board, int row, int col){
    if(row == 9){
            return true;
        }

        int nextRow = row, nextCol = col+1;
        if(nextCol == 9){
            nextRow = row+1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
            return Helper(board, nextRow, nextCol);
        }

        for(char dig = '1'; dig <= '9'; dig++){
            if(Safe(board, row, col, dig)){
                board[row][col] = dig;
                if(Helper(board, nextRow, nextCol)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
}

void SolveSudoku(vector<vector<char>>& board){
    Helper(board, 0, 0);
}

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char c : row) {
            cout << c << ' ';
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    cout << "Original Sudoku Board:\n";
    printBoard(board);

    SolveSudoku(board);

    cout << "\nSolved Sudoku Board:\n";
    printBoard(board);
    return 0;
}

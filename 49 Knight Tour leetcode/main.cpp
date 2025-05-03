#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isValid(vector<vector<int>>& grid, int row, int col, int n, int expectedValue){
    if(row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expectedValue){
        return false;
    }
    if(expectedValue == n*n-1){
        return true;
    }

    int ans1 = isValid(grid, row-2, col+1, n, expectedValue+1);
    int ans2 = isValid(grid, row-1, col+2, n, expectedValue+1);
    int ans3 = isValid(grid, row+1, col+2, n, expectedValue+1);
    int ans4 = isValid(grid, row+2, col+1, n, expectedValue+1);
    int ans5 = isValid(grid, row+2, col-1, n, expectedValue+1);
    int ans6 = isValid(grid, row+1, col-2, n, expectedValue+1);
    int ans7 = isValid(grid, row-1, col-2, n, expectedValue+1);
    int ans8 = isValid(grid, row-2, col-1, n, expectedValue+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool CheckValidGrid(vector<vector<int>>& grid){
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main() {
     vector<vector<int>> grid = {
        {0, 59, 38, 33, 30, 17, 8, 63},
        {37, 34, 31, 60, 9, 62, 29, 16},
        {58, 1, 36, 39, 32, 27, 18, 7},
        {35, 48, 41, 26, 61, 10, 15, 28},
        {42, 57, 2, 49, 40, 23, 6, 19},
        {47, 50, 45, 54, 25, 20, 11, 14},
        {56, 43, 52, 3, 22, 13, 24, 5},
        {51, 46, 55, 44, 53, 4, 21, 12}
    };

    cout << (CheckValidGrid(grid) ? "Valid Knight's Tour" : "Invalid Tour") << endl;
    return 0;
}

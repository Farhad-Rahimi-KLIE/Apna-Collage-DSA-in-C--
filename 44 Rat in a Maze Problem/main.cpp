#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string>> solutions;

void Helper(vector<vector<int>>& mat, int row, int col, string path, vector<string>& ans){
    int n = mat.size();
    // Borders
    if(row < 0 || col < 0 || row >=n || col >= n || mat[row][col] == 0 || mat[row][col] == -1){
        return;
    }
    // answer
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }

    // Viseted path
    mat[row][col] = -1; // visited

    // Recursive functions
    Helper(mat, row+1, col, path+"D", ans); // Down
    Helper(mat, row-1, col, path+"U", ans); // UP
    Helper(mat, row, col-1, path+"L", ans); // LEFT
    Helper(mat, row, col+1, path+"R", ans); // RIGHT

    mat[row][col] = 1; // Unvisited
}

vector<string> findPath(vector<vector<int>>& mat){
    vector<string> ans;
    string path = "";
    Helper(mat, 0,0,path, ans);

    return ans;
}

int main() {
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = findPath(mat);
    for(string path : ans){
        cout<<path<<endl;
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

bool Search_Real_Data(vector<vector<int>>& matrix, int row, int target){
    int n = matrix[0].size();
    int start = 0, end = n-1;
    while(start <= end){
        int middle = start + (end - start)/2;
        if(target == matrix[row][middle]){
            return true;
        }else if(target > matrix[row][middle]){
            start = middle+1;
        }else{
            end = middle-1;
        }
    }
    return false;
}

bool Search2D_Matrix(vector<vector<int>>& matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();
    int StartRow = 0, endRow = m-1;
    while(StartRow <= endRow){
        int middle = StartRow + (endRow - StartRow)/2;
        if(target >= matrix[middle][0] && target <= matrix[middle][n-1]){
            return Search_Real_Data(matrix, middle, target);
        }else if(target > matrix[middle][n-1]){
            StartRow = middle+1;
        }else{
            endRow = middle-1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 7;
    cout << (Search2D_Matrix(matrix, target) ? "Found" : "Not Found") << endl;
    return 0;
}
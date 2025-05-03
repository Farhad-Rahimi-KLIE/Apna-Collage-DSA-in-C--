#include<iostream>
#include<vector>
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m-1;
        int startCol = 0, endCol = n-1;
        vector<int> answer;
        while(startRow <= endRow && startCol <= endCol){
            // Top
            for(int i = startCol; i <= endCol; i++){
                answer.push_back(matrix[startRow][i]);
            }
            // Right
            for(int j = startRow+1; j <= endRow; j++){
                answer.push_back(matrix[j][endCol]);
            }

            // Bottom
            for(int i = endCol-1; i >= startCol; i--){
                if(startRow == endRow){
                    break;
                }
                answer.push_back(matrix[endRow][i]);
            }
            // Left
            for(int j = endRow-1; j >= startRow+1; j--){
                if(startCol == endCol){
                    break;
                }
                answer.push_back(matrix[j][startCol]);
            }
            startRow++, endRow--, startCol++, endCol--;
        }
        return answer;
    }

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
#include<iostream>
#include<vector>

using namespace std;

bool searchFOundRows(vector<vector<int>>& matrix, int target, int Rows){
    int cols = matrix[0].size(); // find the cols
    int start = 0, end = cols-1;
    while (start <= end)
    {
        int middle = start + (end - start)/2;
        if (target == matrix[Rows][middle])
        {
            return true;
        } else if (target > matrix[Rows][middle])
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
        
    }
    return false;
}

bool Search2DMatrix(vector<vector<int>>& matrix, int target){
    int rows = matrix.size(); // find the rows
    int cols = matrix[0].size(); // find the cols

    int startRows = 0, endRows = rows-1;

    while (startRows <= endRows)
    {
        int middle = startRows + (endRows - startRows)/2;
        if (target >= matrix[middle][0] && target <= matrix[middle][cols-1])
        {
            // data fount write the founded data code
            return searchFOundRows(matrix, target, middle);
        }
        else if (target >= matrix[middle][cols-1])
        {
            startRows = middle +1;
        }
        else
        {
            endRows = middle -1;
        }
        
    }
    return false;
    
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;

    cout<<Search2DMatrix(matrix, target);
    return 0;
}
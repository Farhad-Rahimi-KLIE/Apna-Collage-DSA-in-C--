#include <iostream>
#include <utility>
#include <limits.h>
#include <vector>

using namespace std;

// linear Search
// pair<int, int> LinearSearch(int mat[][3], int rows, int cols, int key){
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (mat[i][j] == key)
//             {
//                 return {i, j};
//             }
            
//         }
        
//     }
//     return {-1, -1};
// }

// int getMaxSum(int mat[][3], int rows, int cols){
//     int maxRowSumI = INT_MIN;

//     for (int i = 0; i < rows; i++)
//     {
//         int rowSumI = 0;
//         for (int j = 0; j < cols; j++)
//         {
//             rowSumI += mat[i][j];
//         }
//         maxRowSumI = max(maxRowSumI, rowSumI);
//     }
//     return maxRowSumI;
// }

int main()
{
    // first count rows and then count columns
    // int Matrix[4][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}, {13,14,15}};
    // // int Matrix[4][3];
    // int rows = 4;
    // int cols = 3;

// //   for input
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin>>Matrix[i][j];
//         }
//         cout << endl;
//     }

//     //  for output
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << Matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

    // cout<<Matrix[1][2]<<endl;



    // Linear Search
    // pair<int, int> result = LinearSearch(Matrix, rows, cols, 13);
    // if (result.first != -1 && result.second != -1)
    // {
    //     cout<<"key found at :) "<<result.first << " , "<<result.second<<")"<<endl;
    // }else{
    //     cout << "Key not found" << endl;
    // }

    // Maximum Value
    // cout<<getMaxSum(Matrix, rows, cols)<<endl;

    // use Vectors
     
    //  vector<vector<int>> matrix = {{1,2,3},{4,5,6,87,65},{7,8,9}};
    // //  rows = matrix.size();
    // //  cols = matrix[i].size();
    //  for (int i = 0; i < matrix.size(); i++)
    //  {
    //     for (int j = 0; j < matrix[i].size(); j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    //  }
     

    
    return 0;
}
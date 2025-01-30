#include<iostream>
#include<vector>

/*
  Points Noted in Binary Search ->
  1 - only apply in sorted array
  2 - first find start and end variables start = 0, end = arr.size()-1;
  3 - use while loop
  4 - find the middle Index of array;
  5 - if target > arr[middle] then start = middle +1;
  6 - if target < arr[middle] then end = middle -1;
  7 - else return the middle becuase middle is my target;
  8 - and if not find the correct word or data then return the -1;
  9 - Binary Search 2 types  1 - Iterative and second Recursive Methods
*/

using namespace std;

// Recursive Methods
// int RecursiveSearch(vector<int> data, int target, int start, int end){
//     if (start <= end)
//     {
//         int middle = start + (end - start)/2;
//         if (target > data[middle])
//         {
//             return RecursiveSearch(data, target, middle + 1, end);
//         }else if(target < data[middle]){
//            return RecursiveSearch(data, target, start, middle -1);
//         }else{
//             return middle;
//         }
//     }
//     return -1;
// }

// Iterative Methods
int IterativeSearch(vector<int> data, int target){
    int start = 0;
    int end = data.size()-1;
    while (start <= end)
    {
        int middle = start + (end - start)/2;
        if (target > data[middle])
        {
            start = middle + 1;
        }else if(target < data[middle]){
            end = middle -1;
        }else{
            return middle;
        }
        
    }
    return -1;
}

int main()
{
    // Recursive methods
    // vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; // odd
    // int target = 12;
    // int size = arr.size()-1;
    // int result = RecursiveSearch(arr, target, 0, size);
    // cout<<"Recursive Search Result is : "<<result<<endl;


    // Iterative methods
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int target = 34;
    int result = IterativeSearch(arr, target);
    cout<<"Iterative Search Result is : "<<result<<endl;
    return 0;
}
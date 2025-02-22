#include<iostream>
#include<vector>

using namespace std;

// fibonacci numbers

// int Fib(int n){
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return Fib(n -1) + Fib(n -2);
    
// }

// bool isArraySorted(vector<int> arr, int n){
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
    
//     return arr[n-1] >= arr[n-2] && isArraySorted(arr, n-1);
// }

// Binary search using Recursion

// make heaper functions

// int binSearch(vector<int>& arr, int tar, int st, int end){
//     if (st <= end)
//     {
//         int mid = st + (end - st)/2;
//         if (arr[mid] == tar) return mid;
//         else if(arr[mid] <= tar){
//             return binSearch(arr, tar, mid +1, end);
//         }else{
//             return binSearch(arr, tar, st, mid-1);
//         }
        
//     }
//     return -1;
    
// }

// int search(vector<int>& arr, int tar){
//     binSearch(arr, tar, 0, arr.size()-1);
// }

int main()
{

    // vector<int> arr1 = {1, 2, 7, 4, 5};
    // cout << "Test 1 (ascending): " 
    //      << (isArraySortedAsc(arr1, arr1.size()) ? "Sorted" : "Not sorted") 
    //      << endl;
    return 0;
}
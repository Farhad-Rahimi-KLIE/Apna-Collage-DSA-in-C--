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


// merge sort using recursion

void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
        
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    
    while (j <= mid)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx+st] = temp[idx];
    }
    
}

void mergeSort(vector<int>& arr, int st, int end){
    if (st < end)
    {
        int mid = st + (end - st)/2;
        mergeSort(arr, st, mid); // left half
        mergeSort(arr, mid+1, end); // right half

        merge(arr, st, mid, end);
    }
    
}

int main()
{

    // vector<int> arr1 = {1, 2, 7, 4, 5};
    // cout << "Test 1 (ascending): " 
    //      << (isArraySortedAsc(arr1, arr1.size()) ? "Sorted" : "Not sorted") 
    //      << endl;

    
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, arr.size()-1);

    for (int val : arr)
    {
        cout<<val <<" ";
    }
    cout<<endl;
    return 0;
}
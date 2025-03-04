#include<iostream>
#include<climits>

using namespace std;

int main()
{
    // Maximum Subarray Sum - Kadane's Approach
    // 3 Steps
    // 1 - calculate the subarray using code ✔
    // 2 - calculate the maximum subarray sum using brute force approach
    // 3 - calculate the maximum subarray sum using kadane's algorithms approach

    // 1, 12, 123, 1234, 12345,
    // 2, 23, 234, 2345,
    // 3, 34, 345,
    // 4, 45,
    // 5

    // for (int start = 0; start < size; start++)
    // {
    //     for (int end = start; end <= size; end++)
    //     {
    //         for (int k = start; k < end; k++)
    //         {
    //             cout<<arr[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    

//  Brute Force Approach
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr) / sizeof(int);
    // int maxSum = INT_MIN;
    // for (int start = 0; start < size; start++)
    // {
    //     int currentSum = 0;
    //     for (int end = start; end < size; end++)
    //     {
    //         currentSum += arr[end];
    //         maxSum = max(currentSum, maxSum);
    //     }
        
    // }
    
    // cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;


//  Kadane's Algorithms

    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr) / sizeof(int);
    // int maxSum = INT_MIN;
    // int currentSum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     currentSum+= arr[i];
    //     maxSum = max(currentSum, maxSum);
    //     if (currentSum < 0)
    //     {
    //         currentSum = 0;
    //     }
        
    // }
    // cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;
    return 0;
}
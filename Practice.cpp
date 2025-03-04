#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
    // Kadane's Algorithms

    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / sizeof(int);
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i]; // 1
        maxSum = max(currentSum, maxSum);
        
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        
    }
    cout<<"Maximum subarray sum : "<<maxSum<<endl;
    
    return 0;
}
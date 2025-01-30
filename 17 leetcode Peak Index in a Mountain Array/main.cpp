#include<iostream>
#include<vector>

using namespace std;

// Peak Index in Mountain Array


// Brute Force Appraoch

// int PeakINDEX(vector<int> &arr){
//     for (int i = 1; i < arr.size() - 1; i++) {
//         if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
//             return i;
//         }
//     }
//     return -1;
// }

// Optimaized way or Binary Search
int PeakINDEX(vector<int> &nums){
    int start = 1, end = nums.size()-2;
    while (start <= end)
    {
        int middle = start + (end - start)/2;

        if (nums[middle -1] < nums[middle] && nums[middle] > nums[middle +1])
        {
            return middle;
        }
        else if (nums[middle -1] < nums[middle]) // then go to right
        {
            start = middle + 1;
        }
        else // then go to left
        {
            end = middle -1;
        }
        
    }
    return -1;
}

int main()
{
    vector<int> nums = {0,3,8,9,5,2};
    int ans = PeakINDEX(nums);
    cout<<"Peak Index is This : "<<ans<<endl;
    return 0;
}
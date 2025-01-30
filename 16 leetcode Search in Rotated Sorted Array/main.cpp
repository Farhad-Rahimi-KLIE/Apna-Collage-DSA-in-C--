#include<iostream>
#include<vector>

using namespace std;

// Search in Rotated Sorted Array

int RotatedBinarySearch(vector<int> &nums, int target){
    int start = 0, end = nums.size()-1;
    while (start <= end)
    {
        int middle = start + (end - start)/2;
        if (target == nums[middle])
        {
            return middle;
        }
        
        if (nums[start] <= nums[middle]) // left sorted
        {
            if (nums[start] <= target && target <= nums[middle])
            {
                end = middle -1;
            }
            else
            {
                start = middle +1;
            }
            
        }
        else // right sorted
        {
            if (nums[middle] <= target && target <= nums[end])
            {
                start = middle +1;
            }
            else
            {
                end = middle -1;
            }
            
        }
        
    }
    return -1;
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 6;
    int ans = RotatedBinarySearch(nums, target);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}
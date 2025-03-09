#include <iostream>
#include <vector>
using namespace std;

 // Brute Force Apprach
// int singleNonDuplicate(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i += 2) {
//         if (i + 1 >= nums.size() || nums[i] != nums[i + 1]) {
//             return nums[i];
//         }
//     }
//     return -1; // در صورتی که آرایه معتبر نباشد.
// }

// Optimize (Binary Search) Apprach
int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();

    if (n == 1) return nums[0];

    int start = 0, end = n-1;

    while (start <= end)
    {
        int middle = start + (end - start)/2;

        if (middle == 0 && nums[0] != nums[1]) return nums[middle];
        if (middle == n-1 && nums[n-1] != nums[n-2]) return nums[middle];

        if (nums[middle-1] != nums[middle] && nums[middle] != nums[middle+1]) return nums[middle];

       
        if (middle % 2 == 0) // even
        {
            if (nums[middle-1] == nums[middle])
            {
                end = middle -1;
            }else{
                start = middle +1;
            }
            
        }else{ // odd
            if (nums[middle-1] == nums[middle])
            {
                start= middle +1;
            }else{
                end = middle -1;
            }
        }
        
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 8, 8};
    cout << "Single Element: " << singleNonDuplicate(nums) << endl;
    return 0;
}

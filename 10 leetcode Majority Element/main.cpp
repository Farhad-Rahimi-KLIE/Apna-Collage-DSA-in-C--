#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Brute Force Approach
// int FindMajorityElement(vector<int> &nums){
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         int freq = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 freq++;
//             }  
//         }
//         if (freq> n/2)
//         {
//             return nums[i];
//         }   
//     }   
// }


// Optimize Approach
// int FindMajorityElement(vector<int> &nums){
//     int n = nums.size();
//     // sort
//     sort(nums.begin(), nums.end());

//     // freq and ans;
//     int freq = 1, ans = nums[0];

//     // for loops
//     for (int i = 1; i < n; i++) // 1,1,1,1,2,2,2,2,2
//     {
//         if (nums[i] == nums[i-1])
//         {
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if (freq > n/2)
//         {
//             return ans;
//         }
        
//     }
//     return ans;
// }

// Moore's Voting Algorithms
int FindMajorityElement(vector<int> &nums){
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }else{
            freq--;
        }
        
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,2,2,1,1,1};
    int ans = FindMajorityElement(nums);
    cout<<"Majority Element is: "<<ans<<endl;
    return 0;
}
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
// optimize way

// vector<int> TwoSum(vector<int> arr, int target){
//     unordered_map<int, int> mp;
    
//     for (int i = 0; i < arr.size(); i++) {
//         int complement = target - arr[i]; // عددی که نیاز داریم تا به target برسیم
        
//         if (mp.find(complement) != mp.end()) {
//             return {mp[complement], i}; // ایندکس قبلی را که در map ذخیره شده بود، برمی‌گردانیم
//         }
        
//         mp[arr[i]] = i; // عدد فعلی را در map ذخیره می‌کنیم
//     }
    
//     return {}; // در صورتی که جوابی پیدا نشود
// }


// using vector

// vector<int> TwoSum(vector<int> nums, int target){
//     int n = sizeof(nums) / sizeof(int);
//     vector<int> answer;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 answer.push_back(i);
//                 answer.push_back(j);
//                 return answer;
//             }
            
//         }
        
//     }
//     return answer;
    
// }

int main()
{
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
    // vector<int> ans = TwoSum(nums, target);
    // cout<<ans[0] << ","<<ans[1]<<endl;
    return 0;
}
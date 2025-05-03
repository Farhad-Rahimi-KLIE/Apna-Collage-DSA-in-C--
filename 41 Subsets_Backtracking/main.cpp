#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void PrintSubsets(vector<int>& arr, vector<int>& ans, int i){
    if(i == arr.size()){
        for(int val : ans){
            cout<<val;
        }
        cout<<endl;
        return;
    }
    // Includes
    ans.push_back(arr[i]);
    PrintSubsets(arr, ans, i+1);

    // excludes
    ans.pop_back();
    PrintSubsets(arr, ans, i+1);

}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> ans; // save all subsets
    PrintSubsets(arr, ans, 0);
    return 0;
}








// void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
//         if(i == nums.size()){
//             allSubsets.push_back({ans});
//             return;
//         }
        
//         // includes
//         ans.push_back(nums[i]);
//         getAllSubsets(nums, ans, i+1, allSubsets);

//         // excludes
//         ans.pop_back();
//         getAllSubsets(nums, ans, i+1, allSubsets);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> allSubsets;
//         vector<int> ans;

//         getAllSubsets(nums, ans, 0, allSubsets);
//         return allSubsets;
//     }
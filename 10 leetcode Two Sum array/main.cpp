#include<iostream>
#include<vector>

using namespace std;

vector<int> TwoSum(vector<int> nums, int target){
    int n = sizeof(nums) / sizeof(int);
    vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
            
        }
        
    }
    return answer;
    
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = TwoSum(nums, target);
    cout<<ans[0] << ","<<ans[1]<<endl;
    return 0;
}
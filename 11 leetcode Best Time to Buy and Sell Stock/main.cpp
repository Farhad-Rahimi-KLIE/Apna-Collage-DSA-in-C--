#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int BuyStock(vector<int> &nums){
    int MinPrice = INT_MAX; // to find minimum value
    int MaxProfit = 0; // to find maximum profit
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < MinPrice) {
            MinPrice = nums[i];
        } else {
            MaxProfit = max(MaxProfit, nums[i] - MinPrice);
        }
    }
    return MaxProfit;
}

int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    int ans = BuyStock(nums);
    cout<<"Your best Your Maximum Profit is: "<<ans<<endl;
    return 0;
}
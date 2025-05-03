#include<iostream>
#include<vector>

using namespace std;

// Brute Force Approach

// int MostWater(vector<int> &height){
//     int maxArea = 0;
//     for (int i = 0; i < height.size(); i++)
//     {
//         for (int j = i+1; j < height.size(); j++)
//         {
//             int width = j -i;
//             int MinHeight = min(height[i], height[j]);
//             int CurrentWater = width * MinHeight;
//             maxArea = max(maxArea, CurrentWater);
//         }
        
//     }
//     return maxArea;
// }

// OPtimal or Optimized approach which is (Two Pointers)

// int MostWater(vector<int> &height){
//     int leftPointer = 0, rightPointer = height.size()-1, maxArea = 0;
//     while (leftPointer < rightPointer)
//     {
//         int width = rightPointer - leftPointer;
//         int MinHeight = min(height[leftPointer], height[rightPointer]);
//         int currentWater = width * MinHeight;
//         maxArea = max(maxArea, currentWater);
//         height[leftPointer] < height[rightPointer] ? leftPointer++ : rightPointer--;
//     }
//     return maxArea;
// }

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = MostWater(height);
    cout<<"Most Water is: "<<ans<<endl;
    return 0;
}
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<vector<int>> FourSum(vector<int>& arr, int target){
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i = 0; i<n; i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
        for(int j = i+1; j<n;){
            int k = j+1, l = n-1;
            while(k < l){
                long long sum = (long long)arr[i] + (long long)arr[j] + 
                (long long)arr[k] + (long long)arr[l];
                if(sum < target){
                    k++;
                }else if(sum > target){
                    l--;
                }else{
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++; l--;
                    while(k < l && arr[k] == arr[k-1]) k++;
                }
            }
            j++;
            while(j < n && arr[j] == arr[j-1]) j++;
      }   
    }
    return ans;
}


int main() {
     vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> res = FourSum(arr, target);

    for (const auto& quad : res) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> Repeat_Missing(vector<vector<int>>& arr){
    int n = arr.size();
    unordered_set<int> s;
    vector<int> ans;
    int a,b;
    int ExpectationSum = 0, ActualSum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ActualSum += arr[i][j];
            if(s.find(arr[i][j]) != s.end()){
                a = arr[i][j];
                ans.push_back(a);
            }
            s.insert(arr[i][j]);
        }
    }
    // This is the Formula for finding the Missing Value.
    ExpectationSum = (n*n) * (n*n +1)/2;
    b = ExpectationSum + a - ActualSum;
    ans.push_back(b);
    return ans;
}


int main() {
    vector<vector<int>> matrix = {{1,3},{2,2}};
    vector<int> result = Repeat_Missing(matrix);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> Repeat_Missing(vector<int>& arr, int target){
    int n = arr.size();
    unordered_map<int, int> m;
    vector<int> answer;

    for(int i = 0; i < n; i++){
        int first = arr[i];
        int complement = target - first;
        if(m.find(complement) != m.end()){
            answer.push_back(m[complement]);
            answer.push_back(i);
        }
        m[first] = i;
    }
    return answer;
}


int main() {
    vector<int> matrix = {2,7,11,15};
    int target = 9;
    vector<int> result = Repeat_Missing(matrix, target);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
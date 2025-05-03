#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s2 == s;
}

void GetAllPart(string s, vector<string>& partition, vector<vector<string>>& ans){
    if(s.size()== 0){
        ans.push_back(partition);
        return;
    }

    for(int i = 0; i < s.size(); i++){
        string part = s.substr(0, i+1);
        if(isPalindrome(part)){
            partition.push_back(part);
            GetAllPart(s.substr(i+1), partition, ans);
            partition.pop_back();
        }
    }
}

int main() {
     string str = "aab";
    vector<vector<string>> ans;
    vector<string> partition;

    GetAllPart(str, partition, ans);

    // Print all the partitions
    for(auto p : ans){
        for(auto s : p){
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}

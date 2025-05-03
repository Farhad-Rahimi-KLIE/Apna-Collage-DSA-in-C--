#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>
#include <string>
#include <cctype>

using namespace std;

string Reverse_Word(vector<char>& str) {
    int n = str.size();
    string answer = "";
    reverse(str.begin(), str.end());
    for(int i =0; i <n; i++){
        string word = "";
        while(i <n && str[i] != ' '){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() >0){
            answer += " " + word;
        }
    }
    return answer;
}

int main() {
    string input = "hello world";
    vector<char> s(input.begin(), input.end()); // Convert string to vector<char>

    string jan = Reverse_Word(s);
    cout << "Bakemanda is: " << jan << endl;
    return 0;
}
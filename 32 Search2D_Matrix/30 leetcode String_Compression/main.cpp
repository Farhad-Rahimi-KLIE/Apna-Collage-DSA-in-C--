#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>
#include <string>
#include <cctype>

using namespace std;

int String_Compression(vector<char>& str) {
    int n = str.size();
    int index = 0;

    for(int i =0; i < n; i++){
        char ch = str[i]; // a
        int count = 0;
        while(i <n && str[i] == ch){
            count++;
            i++;
        }
        if(count == 1){
            str[index] = ch;
            index++;
        }else{
            str[index] = ch;
            index++;
            string str2 = to_string(count);
            for(int degit : str2){
                str[index] = degit;
                index++;
            }
        }
        i--;
    }
    str.resize(index);
    return index;
}

int main() {
    vector<char> s = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c'};
    
    int length = String_Compression(s);  // Function returns int, not string
    
    // Print the compressed result
    cout << "Compressed length is: " << length << endl;
    cout << "Result: ";
    for(int i = 0; i < length; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
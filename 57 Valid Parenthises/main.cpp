#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') { // opening case
            st.push(s[i]);
        } else { // closing case
            if (st.size() == 0) {
                return false;
            }
            if ((st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.size() == 0;
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (isValid(input)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}

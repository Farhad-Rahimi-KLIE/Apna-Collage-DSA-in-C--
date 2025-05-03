#include<iostream>
#include<string>

using namespace std;

bool isAlphaNum(char ch){
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool isPalindrome(string s){
    int start = 0, end = s.length()-1;

    while (start < end)
    {
        if (!isAlphaNum(s[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
        
    }
    return true;
}

int main()
{
    string str = "ac3?e3c&a";
    cout<<isPalindrome(str);

    return 0;
}
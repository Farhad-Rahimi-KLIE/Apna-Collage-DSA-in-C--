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

string RemoveOccurences(string s, string part){
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<<RemoveOccurences(str, part);

    return 0;
}
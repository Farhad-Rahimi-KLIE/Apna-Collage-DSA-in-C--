#include<iostream>
#include<string>

using namespace std;

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